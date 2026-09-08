// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
void main()
{
    int n, i, c = 0;
    printf("ENTER A NUMBER TO CHECK WHETHER IT IS PRIME OR NOT : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c != 2)
        printf("ENTERED NUMBER IS NOT PRIME NUMBER");
    else
        printf("ENTERED NUMBER IS PRIME NUMBER");
}