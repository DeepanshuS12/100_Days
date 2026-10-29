#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    printf("Enter size: ");
    if(scanf("%d",&n)!=1 || n<=0 || n>1000000) return 1;
    long long *a=malloc((size_t)n*sizeof *a);
    if(!a) return 1;
    long long total=0,left=0;
    printf("Enter elements: ");
    for(int i=0;i<n;i++) { if(scanf("%lld",&a[i])!=1) { free(a); return 1; } total+=a[i]; }
    int answer=-1;
    for(int i=0;i<n;i++) { if(left==total-left-a[i]) { answer=i; break; } left+=a[i]; }
    printf("%d\n",answer);
    free(a); return 0;
}
