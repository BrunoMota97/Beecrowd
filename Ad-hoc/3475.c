#include <stdio.h>
#include<ctype.h>
int main() {
 
char chave[11][7]={"zero","um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
char numero[7];
while(scanf("%s\n",numero)!=EOF){
    if(isdigit(numero[0])){
      numero[0]=numero[0]-'0';
        printf("%s\n",chave[numero[0]]);
    }else{
      if(numero[0]=='z') printf("0\n");
      else if(numero[0]=='u') printf("1\n");
      else if(numero[0]=='d') printf("2\n");
      else if(numero[0]=='t') printf("3\n");
      else if(numero[0]=='q') printf("4\n");
      else if(numero[0]=='c') printf("5\n");
      else if(numero[0]=='o') printf("8\n");
      else if(numero[0]=='n') printf("9\n");
      else if(numero[3]=='s') printf("6\n");
      else printf("7\n");
    }
}
    return 0;
}