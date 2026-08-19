// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("ENTER SIDES OF A TRIANGLE : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c || b + c > a || a + c > b)
    {
        if (a == b || b == c || a == c)
            printf(" IT IS AN ISOSCELES TRIANGLE \n");
        if (a != b && b != c && a != c)
            printf(" IT IS A SCALENE TRIANGLE \n");
        if (a == b && b == c)
            printf(" IT IS AN EQUILATERAL TRIANGLE \n");
    }
    else
    {
        printf(" IT IS AN INVALID TRIANGLE");
    }
    return 0;
}