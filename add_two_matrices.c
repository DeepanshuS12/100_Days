//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4

2 2
5 6
7 8
Output 1:
4 4
6 8
10 12

*/
#include <stdio.h>

int main() {
    int i,j,m,n;
    printf("ENTER THE SIZE OF THE MATRIX : ");
    scanf("%d %d", &m, &n);
    int arr1[m][n];
    int arr2[m][n];
    printf("ENTER %dX%d ELEMENTS OF THE 1st MATRIX : ", m, n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        scanf("%d", &arr1[i][j]);
    }
    printf("ENTER %dX%d ELEMENTS OF THE 2nd MATRIX : ", m, n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        scanf("%d", &arr2[i][j]);
    }
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        arr[i][j]=arr1[i][j]+arr2[i][j];
    }
    printf("SUM MATRIX IS : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}