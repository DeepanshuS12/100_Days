//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, found = 0;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    while (str1[len1] != '\0')
        len1++;

    while (str2[len2] != '\0')
        len2++;

    if (len1 != len2)
    {
        printf("Not rotation");
        return 0;
    }

    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (str1[(i + j) % len1] != str2[j])
                break;
        }

        if (j == len2)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
