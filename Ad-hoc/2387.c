#include<stdio.h>
#include<stdlib.h>

struct segmentos{
  int inicio,fim;
};

int comp(const void* seg1, const void* seg2){
  struct segmentos* a = (struct segmentos*)seg1;
  struct segmentos* b = (struct segmentos*)seg2;

 if(a->inicio==b->fim) return 0;
 else if(a->fim > b->fim) return 1;
 else return -1;
}

int main(){

int n,max=1;

scanf("%d\n",&n);
struct segmentos lista[n];

for(int i=0;i<n;i++){
  scanf("%d %d",&lista[i].inicio,&lista[i].fim);
}
qsort(lista,n,sizeof(struct segmentos),comp);

for(int i=1,j=0;i<n;i++){
  if(lista[i].inicio>=lista[j].fim){
    max++;
    j=i;
  }
}
printf("%d\n",max);

return 0;
}