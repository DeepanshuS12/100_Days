//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main()
{
    int n, i, element, pos;
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("ENTER %d ELEMENTS OF AN ARRAY : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER AN ELEMENT TO INSERT : ");
    scanf("%d", &element);
    printf("ENTER THE POSITION TO INSERT THE ELEMENT : ");
    scanf("%d", &pos);
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    printf("ARRAY AFTER INSERTING THE ELEMENT : ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}