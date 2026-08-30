//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
void main()
{
    int num, i;
    long fact = 1;
    printf("ENTER A NUMBER FOR ITS FACTORIAL : ");
    scanf("%d", &num);
    if (num == 0 || num == 1)
    {
        fact = 1;
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
    }
    printf("FACTORIAL OF %d IS %d ", num, fact);
}