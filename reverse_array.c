//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>

int main() {
    int n,i;
    printf("ENTER SIZE OF THE ARRAY : ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER %d ELEMENTS OF THE ARRAY : ", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("ELEMENTS OF THE ARRAY IN REVERSE : ");
    for(i=1;i<=n;i++){
        printf("%d ",arr[n-i]);
    }
    return 0;
}