//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 1 2
1 2 1
2 1 2
Output 1:
True

Input 2:
2 2 2
1 0 1
2 1 2
Output 2:
False

*/
#include <stdio.h>

int main() {
    int i,j,m,n,f=0;
    printf("ENTER THE SIZE OF THE MATRIX : ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("ENTER %dX%d ELEMENTS OF THE MATRIX : ", m, n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        scanf("%d", &arr[i][j]);
    }
    printf("ENTERED MATRIX IS : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        if(arr[i][j] != arr[j][i]){
            f=1;
        }
    }
    if(f == 0){
        printf("SYMMETRIC MATRIX");
    }
    else{
        printf("NOT A SYMMETRIC MATRIX");
    }
    return 0;
}