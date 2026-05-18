#include <stdio.h>
#include<string.h>
int main() {

char comando[10];
while(scanf("%[^\n]\n",comando)!=EOF){
    if(strcmp(comando,"esquerda")==0) printf("ingles\n");
    else if(strcmp(comando,"direita")==0) printf("frances\n");
    else if(strcmp(comando,"nenhuma")==0) printf("portugues\n");
    else printf("caiu\n");
}
    return 0;
}