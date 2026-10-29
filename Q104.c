#include <stdio.h>
int main(void) {
    long long n;
    printf("Enter positive n: ");
    if(scanf("%lld",&n)!=1 || n<=0 || n>3000000000LL) return 1;
    /* For a pivot x: x*x = n*(n+1)/2. Use binary search. */
    long long target=n*(n+1)/2, l=1, r=n, answer=-1;
    while(l<=r) {
        long long m=l+(r-l)/2;
        long long sq=m*m;
        if(sq==target) { answer=m; break; }
        if(sq<target) l=m+1; else r=m-1;
    }
    printf("%lld\n",answer);
    return 0;
}
