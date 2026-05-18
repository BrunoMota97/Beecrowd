#include <stdio.h>
 
int main() {
 
int n,m,v;
scanf("%d %d\n",&n,&m);
int matriz[n];
for(int i=0;i<n;i++){
    int soma=0;
    for(int j=0;j<m;j++){
        scanf("%d",&v);
        soma+=v;
    }
    matriz[i]=soma;
}
int min=matriz[0],pos=1;
for(int i=1;i<n;i++){
  if(matriz[i]<min){
    min=matriz[i];
    pos=i+1;
  }
}
printf("%d\n",pos);
    return 0;
}