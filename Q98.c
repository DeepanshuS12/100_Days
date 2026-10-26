#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char name[256], *words[64];
    int n = 0;
    printf("Enter full name: ");
    if (!fgets(name, sizeof name, stdin)) return 1;
    char *token = strtok(name, " \t\r\n");
    while (token && n < 64) { words[n++] = token; token = strtok(NULL, " \t\r\n"); }
    if (!n) { puts("No name entered."); return 0; }
    for (int i = 0; i < n - 1; i++) printf("%c. ", toupper((unsigned char)words[i][0]));
    printf("%s\n", words[n-1]);
    return 0;
}
