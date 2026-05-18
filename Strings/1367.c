#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct Submissoes{
    char id,palavra[9];
    int tempo;
};

int main() {
 
int n;
while(scanf("%d\n",&n)){
    struct Submissoes s[n];
    int l=n;
if(n==0) break;
int i=0, vet[100]={0},inc[100]={0};
int corretos=0,pontuacao=0;
while(n--){
    scanf("%c %d %s\n",&s[i].id,&s[i].tempo,&s[i].palavra);
  int ascii=(int)(s[i].id);
  if(strcmp(s[i].palavra,"incorrect")==0){
    inc[ascii]++;
  }else if(strcmp(s[i].palavra,"correct")==0){
    vet[ascii]=1;
    pontuacao+=s[i].tempo;
    if(inc[ascii]>0){
      pontuacao+=20*inc[ascii];
    }
  }
    i++;
}
int total=0;
for(int i=65;i<=90;i++){
  if(vet[i]==1) total++;
}
printf("%d %d\n",total,pontuacao);
}
    return 0;
}