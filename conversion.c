//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main (){
    int cel,fah;
    printf("ENTER TEMPERATURE IN CELSIUS : ");
    scanf("%d", &cel);
    fah=(cel * 1.8)+32;
    printf("FAHRENHEIT = %d ",fah);
    return 0;
}