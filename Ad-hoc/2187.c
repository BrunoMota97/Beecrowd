#include <stdio.h>
 
int main() {
int n,q,v;
int notas[4]={50,10,5,1},k=1,i;
while(scanf("%d\n",&v)!=0){
if(v==0) break;
printf("Teste %d\n",k);
for(i=0;i<3;i++){
       q=v/notas[i];
       v=v-q*notas[i];
       printf("%d ",q);
   }
   q=v/notas[i];
   v=v-q*notas[i];
   printf("%d\n\n",q);
   k++;
}
    return 0;
}