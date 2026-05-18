#include <stdio.h>
 
int main() {
 int n,numero[1001],min,posicao;
 scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%d",&numero[i]);
}
min=numero[0];
for(int i=1;i<n-1;i++){
    if(numero[i]<=min){
        min=numero[i];
        posicao=i;
    }
}
printf("Menor valor: %d\nPosicao: %d\n",min,posicao);
    return 0;
}