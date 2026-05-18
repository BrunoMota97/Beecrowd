#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
 
int n,flag,c;
char nome[43],s[43];
scanf("%d\n",&n);
while(n--){
    scanf("%s\n",nome);
    c=0;
    for(int i=0;nome[i]!='\0';i++) nome[i]=tolower(nome[i]);
    for(int i=0;nome[i]!='\0';i++){
        if((nome[i]!='a' && nome[i]!='e' && nome[i]!='i' && nome[i]!='o' && nome[i]!='u')){
          c++;
        if(c==3){
          break;
        }
        }else{
          c=0;
        }
        }
        if(c==3){
          printf("%c",toupper(nome[0]));
          for(int i=1;nome[i]!='\0';i++) printf("%c",nome[i]);
          printf(" nao eh facil\n");
        }else{
          printf("%c",toupper(nome[0]));
          for(int i=1;nome[i]!='\0';i++) printf("%c",nome[i]);
          printf(" eh facil\n");
        } 
    }
    return 0;
}