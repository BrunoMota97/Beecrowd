#include <stdio.h>
 
int main() {
 
int w1,w2,r;
double soma=0,media,c=0;
scanf("%d %d %d\n",&w1,&w2,&r);
while(w1!=0 && w2!=0 && r!=0){
   c++;
  if(w1==0 && w2==0 && r==0) break;
    double a=w1*(1+(r/30.0));
    double b=w2*(1+(r/30.0));
    media=(a+b)/2;
    if(media<13) printf("Nao vai da nao\n");
    else if(media<14) printf("E 13\n");
    else if(media<40) printf("Bora, hora do show! BIIR!\n");
    else if(media<=60) printf("Ta saindo da jaula o monstro!\n");
    else printf("AQUI E BODYBUILDER!!\n");
    soma+=media;
  scanf("%d %d %d\n",&w1,&w2,&r);
}
if((soma/c)>40) printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
    return 0;
}