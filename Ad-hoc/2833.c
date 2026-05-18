#include <stdio.h>
 
int main() {
 
int x[16],k,l;
for(int i=0;i<16;i++){
   scanf("%d",&x[i]);
}

for(int i=0;i<16;i++){
  if(x[i]==1) k=i;
  if(x[i]==9) l=i;
}
if(k/2 == l/2) printf("oitavas\n");
else if(k/4 ==l/4)printf("quartas\n");
else if(k/8 ==l/8) printf("semifinal\n");
 else printf("final\n");
    return 0;
}