#include <stdio.h>
#include<string.h>
int main() {
char frase[1000];
 char* teclado = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
 int pos[300];
 for(int i = 0; i < 48; ++i){
        pos[teclado[i]] = i;
    }
while(gets(frase)!=NULL){
   for(int i=0;i<strlen(frase);i++){
        if(frase[i]==' ') printf(" ");
        else printf("%c",teclado[pos[frase[i]] - 1]);
     }
     printf("\n");
   }
    return 0;
}