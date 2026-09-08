// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main()
{
    int n1, n2, i, j, GCD = 0;
    printf("ENTER TWO NUMBERS TO FIND THIER GCD : ");
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            if (i > GCD)
                GCD = i;
        }
    }
    int LCM = (n1 * n2) / GCD;
    printf("THE LCM OF %d AND %d IS %d", n1, n2, LCM);
    return 0;
}