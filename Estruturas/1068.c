#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct stack{
	int maxsize;	
	char top;
	char *items;
};

struct stack* newStack(int capacity){
	struct stack *pt = (struct stack*)malloc(sizeof(struct stack));
	pt->maxsize = capacity;
	pt->top = -1;
	pt->items = (char*)malloc(sizeof(int) * capacity);
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

	char palavra[1001];
	int i;
	while(scanf("%s\n",palavra)!=EOF){
	 struct stack *pt = newStack(1001);
	for(i=0;palavra[i]!='\0';i++){
	  if(palavra[i]=='('){
	    push(pt,'(');
	  }else if(palavra[i]==')'){
	    if(isEmpty(pt)) break;
	    else pop(pt);
	  }
	}
  if(i==strlen(palavra) && isEmpty(pt)) printf("correct\n");
  else printf("incorrect\n");
}
	return 0;
}