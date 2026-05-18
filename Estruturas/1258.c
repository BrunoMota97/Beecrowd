#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct Camisola{
	char nome[100],cor[10],tamanho[10];
};

int comp(const void* a, const void* b){
    struct Camisola *ta= (struct Camisola *)a;
    struct Camisola *tb = (struct Camisola *)b;
    if(strcmp(ta->cor,tb->cor)==0){
      if(strcmp(ta->tamanho,tb->tamanho)==0) return strcmp(ta->nome,tb->nome);
      else return -strcmp(ta->tamanho,tb->tamanho);
      }
      return strcmp(ta->cor,tb->cor);
}

int main (){
	int n,i,flag=1;
		struct Camisola shirt[60];
	while(scanf("%d\n", &n)){
	  if(!n) break;
	  if (flag) flag = 0;
    else printf("\n");
	for (i = 0; i  <  n; i++) scanf("%[^\n]\n%s %s\n", shirt[i].nome,shirt[i].cor,(shirt[i].tamanho));

	qsort(shirt, n, sizeof(struct Camisola), comp);
		for (i = 0; i  <  n; i++)
		printf("%s %s %s\n", shirt[i].cor, shirt[i].tamanho, shirt[i].nome);
	}
}