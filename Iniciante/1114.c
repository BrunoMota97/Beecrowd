#include <stdio.h>
int main() {
int code;
while(code!=2002){
    scanf("%d\n",&code);
    if(code==2002){
      printf("Acesso Permitido\n");
      break;
    }else {
    printf("Senha Invalida\n");
    }
}
    return 0;
}