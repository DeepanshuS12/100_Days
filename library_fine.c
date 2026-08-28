// Q23: Write a program to calculate library fine based on late days as follows:
//  First 5 days late: ₹2/day
//  Next 5 days late: ₹4/day
//  Next 20 days days late: ₹6/day
//  More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF LATE DAYS : ");
    scanf("%d", &n);
    int fine;
    if (n <= 5)
    {
        fine = n * 2;
        printf("Fine : Rs%d", fine);
    }
    else if (n > 5 && n <= 10)
    {
        fine = (5 * 2) + (n - 5) * 4;
        printf("Fine : Rs%d", fine);
    }
    else if (n > 10 && n <= 30)
    {
        fine = (5 * 2) + (5 * 4) + (n - 10) * 6;
        printf("Fine : Rs%d", fine);
    }
    else
    {
        printf("Membership Cancelled");
    }
    return 0;
}