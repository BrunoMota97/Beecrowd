#include<stdio.h>
#include<stdlib.h>

struct Aluno{
  int id,media;
};

int comp(const void* a, const void* b){
    return ((struct Aluno*)b)->media - ((struct Aluno*)a)->media;
}

int main(){

int n,k=0;
while(1){
  scanf("%d\n",&n);
  if(n==0) break;
struct Aluno aluno[n];
for(int i=0;i<n;i++) scanf("%d %d\n",&aluno[i].id,&aluno[i].media);
  
	qsort(aluno, n, sizeof(struct Aluno), comp);
	printf("Turma %d\n",++k);
	 for(int i=0;i<n;i++){
    int c=1;
    for(int j=i+1;j<n;j++){
      if(aluno[i].media>aluno[j].media){
         c++;
         for(int k=j;k<n-1;k++){
           aluno[k].media=aluno[k+1].media;
         }
         j--; n--;
      }
    }
    printf("%d ",aluno[i].id);
  }
  printf("\n\n");
}
return 0;
}