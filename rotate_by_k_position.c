// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main()
{
    int n, k, i, j, temp;
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER %d ELEMENTS OF THE ARRAY : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE POSITION TO ROTATE : ");
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        temp = arr[n - 1];
        for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}