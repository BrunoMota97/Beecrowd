#include <stdio.h>
 
int main() {
 int numero,max=-1,posicao;
for(int i=0;i<100;i++){
    scanf("%d\n",&numero);
    if(numero>max){
        max=numero;
        posicao=i+1;
    }
}
printf("%d\n%d\n",max,posicao);
 
    return 0;
}