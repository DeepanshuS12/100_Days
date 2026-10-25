//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char rev[100];
    int i, len, f = 1;
    printf("ENTER A STRING : ");
    scanf("%s", &str);
    len = strlen(str);
    for (i = len - 1; i >= 0; i--)
    {
        rev[len - 1 - i] = str[i];
    }
    rev[len] = '\0';
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != rev[i])
        {
            f = 0;
            break;
        }
    }
    if (f == 0)
        printf("STRING IS NOT PALINDROME");
    else
        printf("STRING IS PALINDROME");
    return 0;
}