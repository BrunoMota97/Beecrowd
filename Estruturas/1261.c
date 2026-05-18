#include <stdio.h>
#include<string.h> 
#include<stdbool.h>

struct funcao{
  char nome[20];
  int salario;
};
struct string{
  char palavra[300];
};

int pos;
bool pesquisarpalavra(struct funcao *cargo, char *palavra, int tamanho){
  for(int i=0;i<tamanho;i++){
    if(strcmp(cargo[i].nome,palavra)==0){
      pos=i;
      return true;
    }
  }
  return false;
}

int main() {
 int i,n,m;
 char texto[10000],*word;
 long long soma;
 struct string pesquisa[10000];
 
  scanf("%d %d\n",&n,&m);
  struct funcao func[n];
for(i=0;i<n;i++){
     scanf("%s %d\n",func[i].nome,&func[i].salario);
   }
   while(m--){
     soma=0;
     while(true){
     scanf(" %[^\n]",texto);
     if(strcmp(texto,".")==0) break;
    i=0;
     word = strtok(texto," ");
     strcpy(pesquisa[i++].palavra,word);
     
     while(word){
       	word = strtok('\0', " ");
       if(word) strcpy(pesquisa[i++].palavra,word);
     }
     for(int j=0;j<i;j++){
       if(pesquisarpalavra(func,pesquisa[j].palavra,n)) soma+=func[pos].salario;
     }
   }
    printf("%lld\n",soma);
}
    return 0;
}