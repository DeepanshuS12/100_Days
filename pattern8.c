/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main()
{

    for (int i = 1; i <= 9; i++)
    {

        int n;

        if (i == 1 || i == 9)
            n = 1;
        else if (i == 2 || i == 8)
            n = 3;
        else if (i == 3 || i == 7)
            n = 5;
        else if (i == 4 || i == 6)
            n = 7;
        else
            n = 9;

        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}