// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    int n, digit;
    int count[10] = {0};
    int max = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times = %d\n", maxDigit);
    printf("Number of occurrences = %d\n", max);

    return 0;
}