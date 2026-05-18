#include <stdio.h>
 
int main() {
 
int a,b,k,l,x[16];
scanf("%d\n%d\n",&a,&b);

for(int i=0;i<16;i++) x[i]=i+1;

for(int i=0;i<16;i++){
  if(x[i]==a) k=i;
  if(x[i]==b) l=i;
}
if(k/2 == l/2) printf("oitavas\n");
else if(k/4 ==l/4)printf("quartas\n");
else if(k/8 ==l/8) printf("semifinal\n");
else printf("final\n");
    return 0;
}