#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 100100

struct pilha {
    char topo; 
    char items[TAM_MAX]; 
};

struct pilha* criar_pilha() {
    struct pilha* nova_pilha = (struct pilha*) malloc(sizeof(struct pilha));
    nova_pilha->topo = -1;
    return nova_pilha;
}

int is_empty(struct pilha* pilha) {
    return pilha->topo == -1;
}

int is_full(struct pilha* pilha) {
    return pilha->topo == TAM_MAX - 1;
}

void push(struct pilha* pilha, int item) {
    if (is_full(pilha)) {
        printf("Erro: a pilha está cheia.\n");
    }
    else {
        pilha->topo++;
        pilha->items[pilha->topo] = item;
    }
}

int pop(struct pilha* pilha) {
    if (is_empty(pilha)) {
        return -1;
    }
    else {
        int item_removido = pilha->items[pilha->topo];
        pilha->topo--;
        return item_removido;
    }
}

int peek(struct pilha* pilha) {
    if (is_empty(pilha)) {
        return -1;
    }
    else {
        return pilha->items[pilha->topo];
    }
}
int main(){
	char palavra[100100];
	int n;
	scanf("%d\n",&n);
	while(n--){
	scanf("%s",palavra);
	struct pilha* minha_pilha = criar_pilha();
	int flag=1;
	for(int i=0;palavra[i];++i){
	  if(palavra[i]=='{' || palavra[i]=='[' || palavra[i]=='(') push(minha_pilha,palavra[i]);
	  else{
	     if(is_empty(minha_pilha)){
	       flag=0;
	       break;
	     }
	     if(palavra[i]=='}' && peek(minha_pilha)=='{') pop(minha_pilha);
	     else if(palavra[i]==']' && peek(minha_pilha)=='[') pop(minha_pilha);
	     else if(palavra[i]==')' && peek(minha_pilha)=='(') pop(minha_pilha);
	     else{
	       flag=0;
	       break;
	     }
	}
	}
	if(!is_empty(minha_pilha)) flag=0;
	if(flag==0)	printf("N\n");
	else printf("S\n");
}
    return 0;
}