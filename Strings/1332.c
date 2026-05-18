#include <stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main() {
 
int n;
char *nome = (char *) malloc(sizeof(char) * 5);
scanf("%d\n",&n);

while(n--){
    scanf("%s\n",nome);
    if(strlen(nome)==5) printf("3\n");
    else{
        if((nome[0]=='o' && nome[1]=='n' && nome[2]=='e') || 
        (nome[0]!='o' && nome[1]=='n' && nome[2]=='e') ||
        (nome[0]=='o' && nome[1]!='n' && nome[2]=='e') ||
        (nome[0]=='o' && nome[1]=='n' && nome[2]!='e')) printf("1\n");
        else printf("2\n");
    }
}
 
    return 0;
}