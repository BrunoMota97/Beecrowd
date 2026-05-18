#include <stdio.h>
int main(){
   int n,k,i;
   while(scanf("%d\n",&n)){
     int conta[n];
     if(n==0) break;
   for(i=0;i<n;i++) scanf("%d",&conta[i]);
   scanf("%d\n",&k);
   for(int i=0,v=k-1;i<n;i++){
     if(conta[v]==conta[conta[v]-1]){
       printf("%d\n",conta[v]);
       break;
     }
     v=conta[v]-1;
   }
   }
}