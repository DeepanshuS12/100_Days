//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>

int main() {
    int i,j,m,n;
    printf("ENTER THE SIZE OF THE MATRIX : ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("ENTER %dX%d ELEMENTS OF THE MATRIX : ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        scanf("%d", &arr[i][j]);
    }
    printf("ENTERED MATRIX IS : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}