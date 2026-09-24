//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("ENTER SIZE OF THE ARRAY : ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER %d ELEMENTS OF THE ARRAY : ", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    printf("THE SUM OF ELEMENTS OF THE ARRAY IS : %d", sum);
    return 0;
}