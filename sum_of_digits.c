//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int n,sum=0,i,r;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    for(i=n;i>0;i=i/10){
        r=i%10;
        sum=sum+r;
    }
    printf("SUM OF DIGITS IS : %d", sum);
    return 0;
}