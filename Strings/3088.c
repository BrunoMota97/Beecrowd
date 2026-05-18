#include <stdio.h>
 
int main() {
 
char frase[10001];
while(scanf("%[^\n]\n",frase)!=EOF){
    for(int i=0;frase[i]!='\0';i++){
        if(frase[i]==' '){
          if(frase[i+1]==',' || frase[i+1]=='.')  i++;
        }
          printf("%c",frase[i]);
        }
    printf("\n");
}
    return 0;
}