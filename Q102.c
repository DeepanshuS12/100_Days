#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, x;
    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000000) return 1;
    int *a = malloc((size_t)n * sizeof *a);
    if (!a) return 1;
    printf("Enter sorted elements: ");
    for (int i=0;i<n;i++) if(scanf("%d",&a[i])!=1) { free(a); return 1; }
    printf("Enter x: ");
    if(scanf("%d",&x)!=1) { free(a); return 1; }
    int l=0,r=n;
    while(l<r) { int m=l+(r-l)/2; if(a[m]<x) l=m+1; else r=m; }
    printf("%d\n", l==n ? -1 : l);
    free(a); return 0;
}
