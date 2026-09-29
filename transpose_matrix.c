//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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
    int trans[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        trans[i][j]=arr[j][i];
    }
    printf("TRANSPOSE MATRIX : \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}