// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main()
{
    int i, j, m, n;
    printf("ENTER THE SIZE OF THE MATRIX : ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    int sum[m];
    printf("ENTER %dX%d ELEMENTS OF THE MATRIX : ", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        sum[i] = 0;

        for (j = 0; j < n; j++)
        {
            sum[i] = sum[i] + arr[i][j];
        }
    }
    printf("SUM OF EACH ROW IS : ");
    for (i = 0; i < m; i++)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}