// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, c = 0, digit, sum = 0;
    printf("ENTER A NUMBER TO CHECK WHETHER IT IS ARMSTORNG NUMBER OR NOT : ");
    scanf("%d", &num);
    int temp = num;
    while (temp > 0)
    {
        c++;
        temp = temp / 10;
    }
    for (i = num; i > 0; i = i / 10)
    {
        digit = i % 10;
        int p=1;
        for(int j=0;j<c;j++){
            p=p*digit;
        }
        sum=sum+p;
    }
    if (sum == num)
        printf("ARMSTRONG NUMBER");
    else
        printf("NOT A ARMSTRONG NUMBER");
    return 0;
}