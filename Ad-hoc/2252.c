#include <stdio.h>
#include <stdlib.h>

int comp(const void* a,const void* b) {
      return *(int*)b - *(int*)a;
}
struct Numero{
	float num; 
	int posicao; 
};

int main(){
  
  int n,k=0;
  struct Numero v[11];
  while(scanf("%d\n",&n)!=EOF){
    for(int i=0;i<10;i++){
      scanf("%f",&v[i].num);
      v[i].posicao = i;
    }
    qsort(v,10,sizeof(struct Numero),comp);
    printf("Caso %d: ",++k);
    for(int i=0;i<n;i++) printf("%d",v[i].posicao);
    printf("\n");
  }
}