#include <stdio.h>
#include<string.h>
int main() {
 int c,n;
 char nome[10];
 scanf("%d\n",&c);
 while(c--){
     scanf("%s %d\n",nome,&n);
     printf("%c\n",!strcmp(nome,"Thor")? 'Y':'N');
 }
    return 0;
}