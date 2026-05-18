#include <stdio.h>

int mdc(int a, int b){
    if(a % b == 0){
      return b;
    }else{
        return mdc(b,(a % b));
    }
}

int main() {
 
long long n,a,b;

while(scanf("%lld %lld %lld",&n,&a,&b)){
  if(!n && !a && !b) break;
    
   printf("%lld\n",((n/a)+(n/b))-n/((a/mdc(a,b))*b));
}
    return 0;
}