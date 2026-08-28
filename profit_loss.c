//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main() {
    int cp,sp;
    printf("ENTER YOUR COST PRICE AND SELLING PRICE : ");
    scanf("%d %d",&cp ,&sp);
    if(sp>cp){
        int pr=((float)(sp-cp)/cp)*100;
        printf("Profit %d",pr);
    }
    else if(cp>sp){
        int loss=((float)(cp-sp)/cp)*100;
        printf("Loss %d",loss);
    }
    else{
        printf("No Profit, No Loss");
    }
     return 0;
}