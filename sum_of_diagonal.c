// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
    int i, j, m, n, sum = 0;
    printf("ENTER THE SIZE OF THE MATRIX : ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("ENTER %dX%d ELEMENTS OF THE MATRIX : ", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            sum = sum + arr[i][j];
        }
    }
    printf("SUM OF THE DIAGONAL ELEMENTS : %d", sum);
    return 0;
}