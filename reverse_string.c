//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char rev[100];
    int i,len;
    printf("ENTER A STRING : ");
    scanf("%s", &str);
    len=strlen(str);
    for(i=len-1;i>=0;i--){
        rev[len-1-i]=str[i];
    }
    rev[len]='\0';
    printf("REVERSED STRING : %s", rev);
    return 0;
}