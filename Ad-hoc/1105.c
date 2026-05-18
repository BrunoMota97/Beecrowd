#include<stdio.h>

int main(){

int b,n;
while(scanf("%d %d\n",&b,&n)){
  if(b==0 && n==0) break;
  int valor[b],d,c,v,impossivel;
  for(int i=0;i<b;i++) scanf("%d",&valor[i]);
  for(int i=0;i<n;i++){
    scanf("%d %d %d\n",&d,&c,&v);
    valor[d-1]-=v;valor[c-1]+=v;
  }
  impossivel=0;
  for(int i=0;i<b;i++){
    if(valor[i]<0){
      impossivel=1;
      break;
    }
  }
  printf("%c\n",impossivel?'N':'S');
}
  return 0;
}