//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.22

*/
#include <stdio.h>
#include <math.h>
int main() {
    double pri,rate,time;
    printf("ENTER PRINCIPAL, RATE and TIME : ");
    scanf("%lf %lf %lf",&pri ,&rate ,&time);
    double si= (pri*rate*time)/100;
    double ci= (pri*(pow((1+ rate/100), time)))- pri;
    printf("SIMPLE INTEREST = %.2lf\n", si);
    printf("COMPOUND INTEREST = %.2lf\n", ci);
     return 0;
}