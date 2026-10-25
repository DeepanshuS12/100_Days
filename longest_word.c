//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

int main()
{
    char str[200];
    int i, len = 0, max = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    scanf("%199[^\n]", str);

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (len > max)
            {
                max = len;
                maxStart = start;
            }

            if (str[i] == '\0')
                break;

            len = 0;
            start = i + 1;
        }
        else
        {
            len++;
        }
    }

    printf("Longest word: ");
    for (i = maxStart; i < maxStart + max; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
