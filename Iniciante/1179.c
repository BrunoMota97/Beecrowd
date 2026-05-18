#include<stdio.h>

int main(){
  
  int n,c=0,d=0,impares[5],pares[5];
  for(int i=0;i<15;i++){
    scanf("%d\n",&n);
    if(n%2==0) pares[c]=n,c++;
    else impares[d]=n,d++;
    if(d==5 || i==14){
      for(int i=0;i<d;i++) printf("impar[%d] = %d\n",i,impares[i]);
      d=0;
    }
    if(c==5 || i==14){
      for(int i=0;i<c;i++) printf("par[%d] = %d\n",i,pares[i]);
      c=0;
    }
  }
  return 0;
}