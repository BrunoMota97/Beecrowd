#include <stdio.h>

long long int Fib(long long int n) {
    long long int t1 = 0, t2 = 1, nextTerm = t1 + t2;
    if(n==0) return 0;
    if(n==1) return 1;
    for (int i = 3; i <= n; i++){
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
    return nextTerm;
}
int main() {
    long long int t,n,v;
    scanf("%lld\n",&t);
    while(t--){
      scanf("%lld\n",&n);
      printf("Fib(%lld) = %lld\n",n, Fib(n));
    }
    return 0;
}
