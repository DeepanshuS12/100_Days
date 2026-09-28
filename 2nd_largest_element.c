//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n,i,j,temp=0;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY : ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
        }
    }
    printf("SECOND LARGEST ELEMENT IS : %d", arr[1]);
    return 0;
}