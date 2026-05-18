#include <stdio.h>

int main() {
long long int m,n;
while(scanf("%lld %lld",&m,&n)!=EOF){
    long long int fact1=1,fact2=1,i;
     for (i = 1; i <= m; i++) {
        fact1 *= i;
    }
      for (i = 1; i <= n; i++) {
        fact2 *= i;
    }
   printf("%lld\n",fact1+fact2);
}
 
    return 0;
}