#include <stdio.h>
int main()
{
    char phone[30];
    int index = 0;
    do
    {
        index = 0;
        printf("PHONE NUMBER: ");
        scanf(" %29[^\n]", phone);
        char cleaned_phone[30];
        for (int i = 0; phone[i] != '\0'; i++)
        {
            if (phone[i] >= '0' && phone[i] <= '9')
            {
                cleaned_phone[index] = phone[i];
                index++;
            }
        }
        cleaned_phone[index] = '\0';
        printf("Original Input: %s\n", phone);
        printf("Cleaned: %s\n", cleaned_phone);
        printf("Count of Digits: %d\n", index);
        if (index == 11)
        {
            printf("Valid local number\n");
        }
        else
        {
            printf("Invalid length - Please re-enter\n");
            continue;
        }
    } while (index != 11);
}