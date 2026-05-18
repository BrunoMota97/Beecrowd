#include <stdio.h>
 
int main() {
 
char texto[1001];
scanf("%[^\n]",texto);

for(int i=0,c=0;texto[i]!='\0';i++){
       if(texto[i]=='p' && texto[i+1]=='p' && texto[i+2]!='p'){
          printf("%c",texto[i+1]);
       }else if(texto[i]=='p' && texto[i+1]=='p') i++,printf("p",texto[i+1]);
    if(texto[i]!='p') printf("%c",texto[i]);
}
printf("\n");
    return 0;
}