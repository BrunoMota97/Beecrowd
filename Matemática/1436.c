#include <stdio.h>
#include <stdlib.h>

int comp(const void* a,const void* b) {
      return *(int*)a - *(int*)b;
}
 
int main() {
    int t,n;
     scanf("%d\n",&t);
     int i=0;
     while(t--){
       scanf("%d",&n);
       int idade[n];
       for(int i=0;i<n;i++) scanf("%d",&idade[i]);
      qsort(idade, n, sizeof(int), comp);
  
      printf("Case %d: %d\n",++i,idade[n/2]);
     }
      return 0;
}
