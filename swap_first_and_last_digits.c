// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main()
{
    int num, first, last, temp, place = 1, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;

    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;

    result = num - first * place - last;
    result = result + last * place + first;

    printf("After swapping = %d", result);

    return 0;
}