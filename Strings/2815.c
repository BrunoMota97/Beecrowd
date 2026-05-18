#include <stdio.h>
#include <string.h>

int main(){
    char texto[15001];
    scanf("%[^\n]", texto);

     for(int i=0; i<strlen(texto)-2; i++){
        if(texto[i] == texto[i+2] && texto[i+1] == texto[i+3]){
          for(int k=i+2; k<strlen(texto); k++){
               texto[k] = texto[k+2];
          }
        } 
     }
    printf("%s\n", texto);
    return 0;
}