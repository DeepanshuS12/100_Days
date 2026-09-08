//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int n,pro=1,i,r;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    for(i=n;i>0;i=i/10){
        r=i%10;
        if(r%2==1)
        pro=pro*r;
    }
    printf("PRODUCT OF ODD DIGITS IS : %d", pro);
    return 0;
}