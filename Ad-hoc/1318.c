#include <stdio.h>
int main(){
   int n,m,conta;
   while(scanf("%d %d\n",&n,&m)){
     if(n==0 && m==0) break;
   int v[20001]={0};
   for(int i=0;i<m;i++){
     scanf("%d",&conta);
     v[conta-1]++;
   }
   int c=0;
   for(int i=0;i<n;i++){
     if(v[i]>=2) c++;
   } 
   printf("%d\n",c);
   }
}