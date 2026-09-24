//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n1,n2,i;
    printf("ENTER THE SIZE OF 1st AND 2nd ARRAY : ");
    scanf("%d %d", &n1, &n2);
    int arr1[n1];
    int arr2[n2];
    int arr[n1+n2];
    printf("ENTER ELMENTS OF 1st AND 2nd ARRAY : ");
    for(i=0;i<n1;i++){
        scanf("%d", &arr1[i]);
        arr[i]=arr1[i];
    }
    for(i=n1;i<n1+n2;i++){
        scanf("%d", &arr2[i]);
        arr[i]=arr2[i];
    }
    printf("ENTER ELMENTS OF 1st AND 2nd ARRAY : ");
    for(i=0;i<n1+n2;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}