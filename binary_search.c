//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n,s,i,l,u,f=-1,index;
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d", &n);
    printf("ENTER %d NUMBERS OF THE ARRAY : ",n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    l=0;
    u=n-1;
    printf("ENTER THE NUMBER TO SEARCH : ");
    scanf("%d", &s);
    for(i=0;i<n;i++){
        if(arr[(l+u)/2] == s){
            f=1;
            index=(l+u)/2;
            break;
        }
        else if(arr[(l+u)/2]>s){
            l=((l+u)/2)+1;
        }
        else{
            u=((l+u)/2)-1;
        }
    }
    if(f==1){
        printf("%d FOUND AT INDEX %d",s ,index);
    }
    else{
        printf("%d", f);
    }
    return 0;
}