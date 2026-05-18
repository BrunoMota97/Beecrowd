#include <stdio.h>
#include<string.h>
int main() {

int n;
char escolha1[7],escolha2[7];
scanf("%d\n",&n);
while(n--){
  scanf("%s %s\n",escolha1,escolha2);
if(strcmp(escolha1,"pedra")==0 && strcmp(escolha2,"pedra")==0) printf("Sem ganhador\n");
else if(strcmp(escolha1,"papel")==0 && strcmp(escolha2,"papel")==0) printf("Ambos venceram\n");
else if(strcmp(escolha1,"ataque")==0 && strcmp(escolha2,"ataque")==0) printf("Aniquilacao mutua\n");
else if(strcmp(escolha1,"ataque")==0 && strcmp(escolha2,"pedra")==0) printf("Jogador 1 venceu\n");
else if(strcmp(escolha1,"pedra")==0 && strcmp(escolha2,"ataque")==0)  printf("Jogador 2 venceu\n");
else if(strcmp(escolha1,"pedra")==0 && strcmp(escolha2,"papel")==0)  printf("Jogador 1 venceu\n");
else if(strcmp(escolha1,"papel")==0 && strcmp(escolha2,"pedra")==0)  printf("Jogador 2 venceu\n");
else if(strcmp(escolha1,"ataque")==0 && strcmp(escolha2,"papel")==0)  printf("Jogador 1 venceu\n");
else printf("Jogador 2 venceu\n");
}
    return 0;
}