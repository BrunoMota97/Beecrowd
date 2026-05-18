#include <stdio.h>
#include<stdbool.h> 
#include<math.h>
bool primo(long long x){
  int flag=0;
    for (int i=2; i <=sqrt(x); i++) {
    if (x%i==0) {
       flag=1; break;
    }
    }
    if(flag==1) return false;
  return true;
  
}
int main() {
 
long long n;

scanf("%lld\n",&n);

printf("%c\n",primo(n)?'N':'S');
    return 0;
}