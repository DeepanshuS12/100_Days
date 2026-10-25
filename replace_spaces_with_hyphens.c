//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
    char str[100];
    int i;
    printf("ENTER A STRING : ");
    scanf("%[^\n]", str);
    for(i=0;str[i] != '\0';i++){
        if(str[i]==' '){
            str[i]='-';
        }
    }
    printf("CHANGED STRING : %s", str);
    return 0;
}