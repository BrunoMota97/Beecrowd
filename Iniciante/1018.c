#include <stdio.h>
 
int main() {
int n,q;
int notas[7]={100,50,20,10,5,2,1};
scanf("%d\n",&n);
printf("%d\n",n);
for(int i=0;i<7;i++){
       q=n/notas[i];
       n=n-q*notas[i];
       printf("%d nota(s) de R$ %d,00\n",q,notas[i]);
   }
    return 0;
}