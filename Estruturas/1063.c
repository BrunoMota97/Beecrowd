#include <stdio.h>
#include <stdlib.h>

struct stack{
	int maxsize;	
	char top;
	char *items;
};

struct stack* newStack(int capacity){
	struct stack *pt = (struct stack*)malloc(sizeof(struct stack));
	pt->maxsize = capacity;
	pt->top = -1;
	pt->items = (int*)malloc(sizeof(int) * capacity);
	return pt;
}

int size(struct stack *pt) {
	return pt->top + 1;
}
int isEmpty(struct stack *pt) {
	return pt->top == -1;   			
}
int isFull(struct stack *pt) {
	return pt->top == pt->maxsize - 1; 
}
void push(struct stack *pt, int x){
	if (isFull(pt))	exit(EXIT_FAILURE);
	pt->items[++pt->top] = x;
}

char peek(struct stack *pt){
	if (!isEmpty(pt)) {
		return pt->items[pt->top];
	}
	else {
		exit(EXIT_FAILURE);
	}
}
char pop(struct stack *pt){
	if(isEmpty(pt)){
		exit(EXIT_FAILURE);
	}
	return pt->items[pt->top--];
}

int main(){
	
	int n,i,j;
	char a[2000],b[2000];
	while(scanf("%d",&n) && n){
	   for(i=0;i<n;i++) scanf(" %c",&a[i]);
	   for(i=0;i<n;i++) scanf(" %c",&b[i]);
	   	struct stack *pilha = newStack(1000);
	   for(i=0,j=0;;){
	     if(!isEmpty(pilha) && peek(pilha)==b[j]){
	       pop(pilha);
	       printf("R");
	       j++;
	     }else if(i<n){
	       push(pilha,a[i]);
	       printf("I");
	       i++;
	       }else break;
	     }
	   if(isEmpty(pilha)) printf("\n");
	   else printf(" Impossible\n");
	   
	  }
	  return 0;
}	  