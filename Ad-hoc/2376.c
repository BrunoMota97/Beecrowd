#include <stdio.h>
 
int main() {
char oitavas[16]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'},quartas[8],meias[4],final[2];

int a,b,pos=0;
for(int i=0;i<8;i++,pos+=2){
  scanf("%d %d\n",&a,&b);
  if(a>b) quartas[i]=oitavas[pos];
  else quartas[i]=oitavas[pos+1];
}
pos=0;
for(int i=0;i<4;i++,pos+=2){
  scanf("%d %d\n",&a,&b);
  if(a>b) meias[i]=quartas[pos];
  else meias[i]=quartas[pos+1];
}
pos=0;
for(int i=0;i<2;i++,pos+=2){
  scanf("%d %d\n",&a,&b);
  if(a>b) final[i]=meias[pos];
  else final[i]=meias[pos+1];
}
scanf("%d %d\n",&a,&b);
if(a>b) printf("%c\n",final[0]);
else printf("%c\n",final[1]);
    return 0;
}