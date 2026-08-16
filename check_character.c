//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
int main() {
    char ch;
    printf("ENTER A CHARACTER : ");
    scanf("%c", &ch);
    if((int)ch>=97 && (int)ch<=122)
    printf("LOWERCASE ALPHABET");
    else if((int)ch >= 65 && (int)ch <= 90)
    printf("UPPERCASE LETTER");
    else if(ch=='0' || ch=='1' || ch=='2' || ch=='3' || ch=='4' || ch=='5' || ch=='6' || ch=='7' || ch=='8' || ch=='9')
    printf("DIGIT");
    else
    printf("SPECIAL CHARACTER");
     return 0;
}