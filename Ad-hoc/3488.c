#include <stdio.h>
#include <stdbool.h> 

bool isPowerOfTwo(int n){
   if(n<=0) return false;
  return (n & (n - 1)) == 0;
}
int main() {
 
 int n;
 scanf("%d\n",&n);
 if(isPowerOfTwo(n)==0) printf("false\n");
 else printf("true\n");
    return 0;
}