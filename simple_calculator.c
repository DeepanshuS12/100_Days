// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/
#include <stdio.h>

int main()
{
    char ch;
    int a, b, c;
    printf("ENTER ANY TWO NUMBERS : ");
    scanf("%d %d", &a, &b);
    printf("ENTER THE OPERATION YOU WANT +, -, *, /, %%\n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        c = a + b;
        printf("%d", c);
        break;
    case '-':
        c = a - b;
        printf("%d", c);
        break;
    case '*':
        c = a * b;
        printf("%d", c);
        break;
    case '/':
        c = a / b;
        printf("%d", c);
        break;
    case '%':
        c = a % b;
        printf("%d", c);
        break;
    default:
        printf("INVALID OPERATION");
    }
    return 0;
}