//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n,i,pos;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY : ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("ENTER POSITION OF THE ELEMENT TO DELETE THE ELEMENT : ");
    scanf("%d", &pos);
    for(i=0;i<n;i++){
        if(i != pos)
        printf("%d ", arr[i]);
    }
    return 0;
}