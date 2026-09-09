//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 2.6

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n;
    double sum=1,a=3;
    printf("ENTER THE LIMIT OF THE SERIES : ");
    scanf("%d", &n);
    for(int i=1;i<n;i++){
        sum=sum+(a/(a+1));
        a+=2;
    }
    printf("Approximate Sum : %.1lf", sum);
    return 0;
}