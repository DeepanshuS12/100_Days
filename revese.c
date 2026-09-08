//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int n,rnum=0,i,r;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    for(i=n;i>0;i=i/10){
        r=i%10;
        rnum=rnum*10+r;
    }
    printf("ITS REVERSE IS : %d", rnum);
    return 0;
}