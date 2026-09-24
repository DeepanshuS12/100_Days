//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>

int main() {
    int n,i;
    printf("ENTER SIZE OF THE ARRAY : ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER %d ELEMENTS OF THE ARRAY : ",n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(i=0;i<n;i++){
        if(min>arr[i])
        min=arr[i];
        if(max<arr[i])
        max=arr[i];
    }
    printf("Min = %d \nMax = %d", min, max);
    return 0;
}