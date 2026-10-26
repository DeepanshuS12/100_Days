#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void) {
    char name[256];
    printf("Enter full name: ");
    if (!fgets(name, sizeof name, stdin)) return 1;
    int start = 1;
    for (int i = 0; name[i]; i++) {
        if (isspace((unsigned char)name[i])) start = 1;
        else if (start) { printf("%c", toupper((unsigned char)name[i])); start = 0; }
    }
    printf("\n");
    return 0;
}
