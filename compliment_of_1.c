//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main()
{
    long binary, temp, complement = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    temp = binary;

    while (temp > 0)
    {
        digit = temp % 10;

        if (digit == 0)
            digit = 1;
        else if (digit == 1)
            digit = 0;
        else
        {
            printf("Invalid binary number");
            return 0;
        }

        complement = complement + digit * place;
        place = place * 10;
        temp = temp / 10;
    }

    printf("1's complement = %ld", complement);

    return 0;
}