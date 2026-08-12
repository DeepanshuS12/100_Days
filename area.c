//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h> 
int main(){
    int len, bre ,area ,peri;
    printf("ENTER LENGTH AND BREADTH OF A RECTANGLE :");
    scanf("%d %d ",&len ,&bre);
    area = len * bre;
    peri= len + len + bre + bre;
    printf("AREA = %d, ",area);
    printf("PERIMETER = %d",peri);
    return 0;
}