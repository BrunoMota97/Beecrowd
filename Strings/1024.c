#include<stdio.h>
#include<string.h>

int main (){

char mensagem[1001];
char* l,temp;
int rotacao, i,n;
scanf("%d\n",&n);
while(n--){
scanf("%[^\n]\n",mensagem);
for(i=0;mensagem[i]!='\0';i++){
  if((mensagem[i]>='a' && mensagem[i]<='z') || (mensagem[i]>='A' && mensagem[i]<='Z')) mensagem[i]+=3;
}
int m=strlen(mensagem);
for(i=0;i<(m/2);i++){
  temp=mensagem[i];
  mensagem[i]=mensagem[m-1-i];
  mensagem[m-1-i]=temp;
}
for(i=m/2;i<m;i++) mensagem[i]--;

for(int i=0;mensagem[i]!='\0';i++)printf("%c",mensagem[i]);
printf("\n");
}
return 0;
}