#include <stdio.h>
 
int main() {
float x,soma=0.0;
int c=0;
scanf("%f\n",&x);
while(x!=2){
    if(x<0.0 || x>10.0){
        printf("nota invalida\n");
    }else{
        soma+=x;
        c++;
    if(c==2){ 
        printf("media = %.2f\n",soma/2);
        printf("novo calculo (1-sim 2-nao)\n");
        while(1){
        scanf("%f\n",&x);
        if((int)x==1){
         soma=0.0,c=0;
         break;
        }else if((int)x==2){
          return 0;
        }else{
           printf("novo calculo (1-sim 2-nao)\n");
        }
    }
    }
    }
  scanf("%f\n",&x);
}
    return 0;
}