//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("ENTER THREE NUMBERS : \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d IS THE LARGEST AMONG THESE", a);
    }
    else if (b > c && b > a)
    {
        printf("%d IS THE LARGEST AMONG THESE", b);
    }
    else
    {
        printf("%d IS THE LARGEST AMONG THESE", c);
    }
}