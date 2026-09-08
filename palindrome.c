//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int num,rev=0,r;
    printf("Enter a number : ");
    scanf("%d", &num);
    int temp=num;
    while(temp>0){
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    if(num == rev)
    printf("PALINDROME NUMBER");
    else
    printf("NOT A PALINDROME NUMBER");
    return 0;
}