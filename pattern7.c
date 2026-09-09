/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {

        int n;

        if (i == 1 || i == 5)
            n = 1;
        else if (i == 2 || i == 4)
            n = 3;
        else
            n = 5;

        for (int j = 1; j <= n; j++) {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}