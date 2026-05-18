#include <stdio.h>
#include <stdlib.h>

typedef struct exemplo{
	int v; 
	struct exemplo *prox; 
} t_exemplo;

t_exemplo *cabeca = NULL;
t_exemplo *corrente = NULL;

t_exemplo * criar_lista(int valor){

	t_exemplo * p = (t_exemplo*)malloc(sizeof(t_exemplo));
	if(p == NULL) return NULL;
	p->v = valor; 
	p->prox = NULL; 
	cabeca = corrente = p;
	return p;
}

t_exemplo* adicionar_lista(int v){
	if(cabeca == NULL){
		return criar_lista(v);
	}

	t_exemplo * p = (t_exemplo*)malloc(sizeof(t_exemplo));
	if(p == NULL)	return NULL;

	p->v = v;
	p->prox = NULL;
	corrente->prox = p;
	corrente = p;

	return p;
}
void imprimir_lista(){
	t_exemplo *aux = cabeca;
  
	while(aux->prox!= NULL){
		printf("%d ", aux->v);
		aux = aux->prox;
	}
	printf("%d\n",aux->v);
}
int lista_vazia(){
	if(cabeca == NULL)
		return 1;
	return 0;
}

t_exemplo * buscar_elemento(int v, t_exemplo **ant){

	if(lista_vazia() == 1) return NULL;
	t_exemplo *p = cabeca;
	t_exemplo *aux_ant = NULL;
	int achou = 0;

	while(p != NULL){
		if(p->v == v)	{
			achou = 1;
			break;
		}
		aux_ant = p;
		p = p->prox;
	}
	if(achou == 1){
		if(ant) *ant = aux_ant;
		return p;
	}
	return NULL;
}
int remover_elemento(int v){
	t_exemplo *ant = NULL;
	t_exemplo * elem = buscar_elemento(v, &ant);
	if(elem == NULL)	return 0;
	if(ant != NULL)	ant->prox = elem->prox;
	if(elem == corrente) corrente = ant;
	if(elem == cabeca) cabeca = elem->prox;
	free(elem);
	elem = NULL;
	return 1;
}

int tamanho_lista(){
	if(lista_vazia())	return 0;
	t_exemplo *aux = cabeca;
	int tam = 0;
	while(aux != NULL){
		tam++;
		aux = aux->prox;
	}
	return tam;
}

int main(){
  int ar[50000],n,c,v;
  while(scanf("%d\n",&n)!=EOF){
	for(int i=0;i<n;i++) scanf("%d",&ar[i]);
	for(int i=0;i<n;i++){
	adicionar_lista(ar[i]);
	}
	scanf("%d\n",&c);
	for(int i=0;i<c;i++){
	  scanf("%d",&v);
	  remover_elemento(v);
	}
	imprimir_lista();
}
	return 0;
}