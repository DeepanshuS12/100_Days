#include <stdio.h>
#include <string.h>
int main(void) {
    char s[256];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    int n = (int)strlen(s);
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n-i; len++)
            printf("%.*s\n", len, s+i);
    return 0;
}
