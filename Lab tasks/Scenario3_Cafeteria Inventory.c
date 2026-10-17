#include <stdio.h>
int main()
{
    int menu[] = {25, 12, 8, 40, 5, 18, 3, 22};
    printf("\n");
    for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++)
    {
        printf("Item: %d     Quantity: %d   ", i + 1, menu[i]);
        if (menu[i] < 10)
        {
            printf("Item %d is LOW on stock - reorder required", i + 1);
        }
        printf("\n");
    }
    int num = 0, sold = 0;
    printf("\n");
    do
    {
        printf("Enter Item No. : ");
        scanf("%d", &num);
        if (num < 0 || num > 8)
        {
            printf("Invalid Item Number. Try Again\n");
            continue;
        }
        else if (num == 0)
        {
            break;
        }
        do
        {
            printf("Please enter its quantity: ");
            scanf("%d", &sold);
            if (sold <= 0 || menu[num - 1] - sold < 0)
            {
                printf("Error: Invalid Quantity\n");
                continue;
            }
        } while (sold <= 0 || menu[num - 1] - sold < 0);
        menu[num - 1] -= sold;
    } while (num != 0);
    printf("\nAT THE END OF THE DAY. SUMMARY\n");
    for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++)
    {
        printf("Item: %d    Quantity: %d\n", i + 1, menu[i]);
    }
    int index = 1, total = 0;
    int min = menu[0];
    for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++)
    {
        total += menu[i];
        if (menu[i] < min)
        {
            min = menu[i];
            index = i + 1;
        }
    }
    printf("\nTotal units remaining: %d\n", total);
    printf("\nItem No. %d has the least stock. Stock: %d", index, min);
}