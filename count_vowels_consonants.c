//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char vow[]="AEIOUaeiou";
    int i=0,vowel=0,cons;
    printf("ENTER A STRING : ");
    scanf("%s", &str);
    while(str[i] != '\0'){
        for(int j=0;vow[j]!='\0';j++){
            if(str[i] == vow[j])
            vowel++;
        }
        i++;
    }
    cons=strlen(str)-vowel;
    printf("VOWELS = %d", vowel);
    printf("CONSONANTS = %d", cons);
    return 0;
}