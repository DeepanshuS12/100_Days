//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,x1,x2;
    printf("ENTER THE VALUES OF a, b AND c OF QUADRATIC EQUATION : ");
    scanf("%d %d %d",&a ,&b ,&c);
    int D=(int)pow(b,2) - 4*a*c;
    if(D>0){
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("ROOTS ARE REAL AND DIFFERENT : %d %d",x1 ,x2);
    }
    else if(D==0){
        x1=-b/(2*a);
        printf("ROOTS ARE REAL AND SAME : %d", x1);
    }
    else
    printf("ROOTS ARE COMPLEX");
     return 0;
}