#include <stdio.h>
 
int main() {
int i,espacos,sobra;
for(i=1,espacos=7,sobra=-1;i<=5;i++,espacos--,sobra+=2){
    for(int j=1;j<=espacos;j++) printf(" ");
    printf("%c",i+64);
    for(int k=1;k<=sobra;k++) printf(" ");
    if(i!=1) printf("%c",i+64);
    printf("\n");
}
for(i=4,espacos=4,sobra=5;i>0;i--,espacos++,sobra-=2){
  for(int j=1;j<=espacos;j++) printf(" ");
  printf("%c",i+64);
  for(int k=1;k<=sobra;k++) printf(" ");
  if(i!=1) printf("%c",i+64);
  printf("\n");
}
    return 0;
}