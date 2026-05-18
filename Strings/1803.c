#include <stdio.h>
#include<string.h>
int main(){
    char m[200][200],letra;
    int tamanho;
    for(int i=0;i<4;i++) scanf("%s\n",m[i]);
    tamanho=strlen(m[0]);
    int f=0,l=0,soma=0;
    
    for(int i=0,c=1000;i<4;i++,c/=10){
        f+=(m[i][0]-48)*c;
        l+=(m[i][tamanho-1]-48)*c;
      }
      
        for(int j=1;j<=tamanho-2;j++){
          soma=0;
          for(int i=0,c=1000;i<4;i++,c/=10){
          soma+=(m[i][j]-48)*c;
        }
           char c=((f*soma+l)%257);
           printf("%c",c);
        }
        printf("\n");
        return 0;
}