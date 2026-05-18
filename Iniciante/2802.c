#include <stdio.h>
int main() {
long long int n,l,r;
scanf("%lld\n",&n);
l=((n-1)*n)/2;
r=(n*(n-1)*(n-2)*(n-3))/24;
printf("%lld\n",1+l+r);
    return 0;
}