#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
 
int n;
scanf("%d\n",&n);
char frase[201];
while(n--){
  int conta[26]={0};
     scanf("%[^\n]%*c",frase);
    for(int i=0;frase[i]!='\0';i++){
        frase[i]=tolower(frase[i]);
        conta[frase[i]-'a']++;
    }
    int max=-1,posicao=0;
    for(int i=0;i<26;i++){
        if(conta[i]>max){
          max=conta[i];
          posicao=i;
        }
    }
    for(int i=0;i<26;i++){
      if(conta[i]==max) printf("%c",i+'a');
    } 
    printf("\n");
}
    return 0;
}