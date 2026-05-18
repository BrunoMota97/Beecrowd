#include <stdio.h>

int main() {
    int ar[10001],n,k=0;
    while(scanf("%d\n",&n)!=0){
    if(n==0) break;
    for (int i = 0; i < n; i++) scanf("%d",&ar[i]);
     int res=0;
      for (int i = 0; i < n; i++){
         if(i+1==ar[i] && res==0) res=ar[i];
      }
      printf("Teste %d\n%d\n\n",++k,res);
    }
    return 0;
}