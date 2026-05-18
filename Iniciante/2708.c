#include <stdio.h>
#include<string.h>
int main() {
 
 char s[10];
 int t,soma=0,v=0,sair=0,voltar=0;
 scanf("%s %d\n",s,&t);
 while(strcmp(s,"ABEND")){
      if(strcmp(s,"SALIDA")==0) soma+=t,sair++;
      else if(strcmp(s,"VUELTA")==0)  v+=t,voltar++;
      scanf("%s %d\n",s,&t);
 }
 printf("%d\n%d\n",soma-v,sair-voltar);
    return 0;
}