#include<stdio.h>
#include<string.h>
int main (){

char nome[51];
int rotacao, i,n;
scanf("%d\n",&n);
while(n--){
scanf("%s\n",nome);
scanf ("%d", &rotacao);
for(i=0; i<strlen(nome);i++){
  char l=nome[i]-rotacao;
  if(l>'Z') l-=26;
  else if(l<'A') l+=26;
   printf ("%c", l);
}
   printf("\n");
}
return 0;
}