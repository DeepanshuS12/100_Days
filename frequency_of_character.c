// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main()
{
    char str[100];
    char find;
    int i, f = 0;

    printf("ENTER A STRING: ");
    scanf("%99s", str);

    printf("ENTER THE CHARACTER TO FIND THE FREQUENCY OF: ");
    scanf(" %c", &find);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == find)
        {
            f++;
        }
    }

    printf("%d", f);

    return 0;
}
