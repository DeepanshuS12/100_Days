//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main() {
    char wrd[100];
    int i=0;
    printf("ENTER A STRING : ");
    scanf("%s", wrd);
    while(wrd[i] != '\0'){
        printf("%c \n", wrd[i]);
        i++;
    }
    return 0;
}