#include <stdio.h>
#include <stdlib.h>

struct stack{
	int maxsize;	
	int top;
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

int peek(struct stack *pt){
	if (!isEmpty(pt)) {
		return pt->items[pt->top];
	}
	else {
		exit(EXIT_FAILURE);
	}
}
int pop(struct stack *pt){
	if(isEmpty(pt)){
		exit(EXIT_FAILURE);
	}
	return pt->items[pt->top--];
}

int main(){
	
	int n,x;
	while(scanf("%d",&n)!=EOF){
	 
	  if(!n) break;
	  while(scanf("%d",&x)){
	    if(!x){
	      printf("\n");
	      break;
	    }
	   struct stack *a = newStack(10000);
	   struct stack *estacao = newStack(10000);
	   struct stack *b = newStack(10000);
	  push(a,x);
	  push(b,1);
	  for(int i=2;i<=n;i++){
	    scanf("%d",&x);
	    push(a,x);
	    push(b,i);
	  }
	  while(!isEmpty(estacao) || !isEmpty(a) || !isEmpty(b)){
	    if(!isEmpty(a) && !isEmpty(b) && peek(a)==peek(b)){
	      pop(a),pop(b);
	    }else if(!isEmpty(b) && !isEmpty(estacao) && peek(estacao)==peek(b)){
	      pop(estacao),pop(b);
	    }else if(!isEmpty(a)){
	      push(estacao,peek(a));
	      pop(a);
	    }else break;
	  }
	  
	  if(isEmpty(a) && isEmpty(estacao) && isEmpty(b)) printf("Yes\n");
	  else printf("No\n");
	    
	  free(a);
	  free(b);
	  free(estacao);
	  }
	}
	return 0;
}