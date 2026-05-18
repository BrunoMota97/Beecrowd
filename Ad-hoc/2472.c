#include <stdio.h>
 
int main() {
 
long long int l,n;
 scanf("%lld %lld\n",&l,&n);
 long long int v=(l-n+1)*(l-n+1);
 v+=n-1;
 printf("%lld\n",v);
    return 0;
}