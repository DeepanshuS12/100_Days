//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() {
    int i,j,m,n,sum=0;
    printf("ENTER THE SIZE OF THE MATRIX : ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("ENTER %dX%d ELEMENTS OF THE MATRIX : ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d", &arr[i][j]);
        sum=sum+arr[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("SUM OF ELEMENTS OF THE MATRIX IS : %d", sum);
    return 0;
}