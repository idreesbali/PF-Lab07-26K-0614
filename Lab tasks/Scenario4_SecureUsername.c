#include <stdio.h>
#include <ctype.h>
int main()
{
    char name[20];
    printf("NAME: ");
    scanf("%19[A-Za-z]", name);
    if (islower(name[0]))
    {
        name[0] -= 32;
    }
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("Character at index %d: %c\n", i, name[i]);
        count++;
    }
    printf("Final name: %s\n", name);
    printf("Total characters stored: %d", count);
    return 0;
    /* Input: Ayesha123
    The scanset stops at 1 because digits are not allowed
    Input: ali_khan
    The scanset stops at _ because it is a special character
    Input: Sara Khan
    The scanset stops at space because spaced are not include in A-Za-z
    */
}