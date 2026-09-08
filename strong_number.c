// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int factorial(int n)
{
    int i;
    long fact = 1;
    if (n == 0 || n == 1)
    {
        fact = 1;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    return fact;
}
int main()
{
    int num, digit, i, sum = 0;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);
    for (i = num; i > 0; i = i / 10)
    {
        digit = i % 10;
        sum = sum + factorial(digit);
    }
    if (num == sum)
        printf("STRONG NUMBER");
    else
        printf("NOT A STRONG NUMBER");
    return 0;
}