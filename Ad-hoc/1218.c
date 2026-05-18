#include <stdio.h>
#include<string.h>
int main() {
 
int n,i=0,valor;
char calcados[1001];
while(scanf("%d\n",&n)!=EOF){
  if(i>0) printf("\n");
scanf("%[^\n]\n",calcados);
int m=0,f=0;
 for(int i=0;calcados[i]!='\0';i++){
        if(isdigit(calcados[i]) && isdigit(calcados[i+1])){
          valor=(calcados[i]-'0')*10 +(calcados[i+1] -'0')*1;
        }
        if(valor==n){
        if(isalpha(calcados[i])){
            if(calcados[i]=='M') m++;
            else f++;
        }
        }
      }
printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",++i,f+m,f,m);

}
    return 0;
}