// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main()
{
    int n, i, element;
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
    i = n - 1;
    while (i >= 0 && arr[i] > element)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element;
    printf("ARRAY AFTER INSERTING THE ELEMENT : ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}