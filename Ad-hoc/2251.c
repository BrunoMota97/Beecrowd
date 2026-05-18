#include <stdio.h>
#include<math.h>

int main() {
    int n,i=0;
    while(scanf("%d\n",&n)){
      if(n==0) break;
      int r =pow(2,n);
      printf("Teste %d\n%d\n\n",++i,r-1);
    }

    return 0;
}