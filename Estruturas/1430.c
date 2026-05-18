#include <stdio.h>
int main() {

char composicao[200];
float temp;
while(scanf("%[^\n]\n",composicao)!=EOF){
    if(composicao[0]=='*') break;
    double soma=0.0;
    int c=0;
    for(int i=0;i<strlen(composicao);i++){
      if(composicao[i]!='/'){
        switch(composicao[i]){
          case 'W': temp=1.0;
          break;
          case 'H': temp=0.5;
          break;
          case 'Q': temp=0.25;
          break;
          case 'E': temp=0.125;
          break;
          case 'S': temp=0.0625;
          break;
          case 'T': temp=0.03125;
          break;
          case 'X': temp=0.015625;
          break;
        }
        soma+=temp;
      }else{
        if(soma==1.0)c++;
        soma=0.0;
      }
    }
    printf("%d\n",c);
}
    return 0;
}