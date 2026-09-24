//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n,i,s,f=-1;
    printf("ENTER SIZE OF THE ARRAY : ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER %d ELEMENTS OF THE ARRAY : ", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE ELEMENT TO SEARCH : ");
    scanf("%d", &s);
    for(i=0;i<n;i++){
        if(arr[i] == s){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("ELEMENT FOUND AT INDEX %d", i);
    }
    else{
        printf("%d", f);
    }
    return 0;
}