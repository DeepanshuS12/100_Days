#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    printf("Enter size: ");
    if(scanf("%d",&n)!=1 || n<=0 || n>1000000) return 1;
    int *a=malloc((size_t)n*sizeof *a);
    if(!a) return 1;
    int candidate=0,count=0;
    printf("Enter elements: ");
    for(int i=0;i<n;i++) {
        if(scanf("%d",&a[i])!=1) { free(a); return 1; }
        if(count==0) { candidate=a[i]; count=1; }
        else if(a[i]==candidate) count++; else count--;
    }
    count=0;
    for(int i=0;i<n;i++) if(a[i]==candidate) count++;
    printf("%d\n", count>n/2 ? candidate : -1);
    free(a); return 0;
}
