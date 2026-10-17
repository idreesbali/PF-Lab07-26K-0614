#include <stdio.h>
int main()
{
    int token[15];
    int count = 0;
    do
    {
        printf("TOKEN NUMBER: ");
        scanf("%d", &token[count]);
        if (token[count] == -1)
        {
            break;
        }
        count++;
    } while (count < 15);
    printf("\nQUEUE:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Postion %d -> TOKEN %d\n", i + 1, token[i]);
    }
    do
    {
        char call;
        printf("\nEnter C to call next patient, E for emergency, or N to stop: ");
        scanf(" %c", &call);
        if (call == 'N' || call == 'n')
        {
            break;
        }
        else if (call == 'E' || call == 'e')
        {
            int emergency;

            if (count == 15)
            {
                printf("Queue is full! Call a patient first.\n");
                continue;
            }

            printf("Enter emergency token: ");
            scanf("%d", &emergency);
            for (int j = count; j > 0; j--)
            {
                token[j] = token[j - 1];
            }

            token[0] = emergency;
            count++;
        }
        else if (call == 'C' || call == 'c')
        {
            printf("TOKEN %d\n", token[0]);
            for (int j = 0; j < count - 1; j++)
            {
                token[j] = token[j + 1];
            }
            count--;
            if (count == 0)
            {
                break;
            }
            printf("UPDATED QUEUE: \n");
            for (int i = 0; i < count; i++)
            {
                printf("Postion %d -> TOKEN %d\n", i + 1, token[i]);
            }
        }
    } while (count > 0);
    // Array indexes start at 0 because C uses zero-based indexing,
    // so an array of size 15 has indexes from 0 to 14.

    // During emergency insertion, elements shift right to left to
    // prevent overwriting existing values. During patient calling,
    // elements shift left to right to move the queue forward safely.

    // Writing beyond index 14 accesses memory outside the array,
    // which may corrupt data, cause crashes, or produce undefined behavior.
}