#include <stdio.h>
 
int main() {
 
  int n,dado[6],comparador[6],flag,c;
  scanf("%d\n",&n);
  for(int i=1;i<=6;i++) comparador[i-1]=i;
  
  while(n--){
      flag=0;
      for(int i=0;i<6;i++) scanf("%d",&dado[i]);
      for(int i=0;i<6;i++){
      c=0;
      for(int j=0;j<6;j++){
          if(comparador[i]==dado[j]) c++;
        }
        if(c!=1){
          flag=1;
          break;
        }
      }
      if(flag!=1 && (dado[0]+dado[5]==7) && (dado[1]+dado[3]==7) && (dado[2]+dado[4]==7)) printf("SIM\n");
      else printf("NAO\n");
  }
    return 0;
}