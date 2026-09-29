// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main()
{
    int i, j, m, n, f = 1;
    printf("ENTER THE SIZE OF THE MATRIX : ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    int dia[m];
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
            {
                dia[i] = arr[i][j];
            }
        }
    }
    for (i = 0; i < m; i++) {
        for (j = i + 1; j < m; j++) {
            if (arr[i][i] == arr[j][j]) {
                f = 0;
                break;
            }
        }

        if (f == 0) {
            break;
        }
    }
    if (f == 0)
    {
        printf("FALSE");
    }
    else
    {
        printf("TRUE");
    }
    return 0;
}