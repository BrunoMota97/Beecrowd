#include <stdio.h>
#include<ctype.h>
int main(){
    char frase[51];
    while(gets(frase)!=NULL){
    for(int i=0,c=0;frase[i]!='\0';i++){
        if(frase[i]!=' '){
           if(c==0){
          frase[i]=toupper(frase[i]);
            c=1;
           }else{
             frase[i]=tolower(frase[i]);
             c=0;
           }
        }
    }
      printf("%s\n",frase);
    }
}