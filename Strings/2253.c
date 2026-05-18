#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
 
char senha[50];
while(scanf("%[^\n]\n",senha)!=EOF){
    if(strlen(senha)<6 || strlen(senha)>32){
      printf("Senha invalida.\n");
      continue;
    }
    int maiuscula=0,minuscula=0,numero=0,f=0;
    for(int i=0;senha[i]!='\0';i++){
       if(isupper(senha[i])) maiuscula=1;
       else if(islower(senha[i])) minuscula=1;
       else if(isdigit(senha[i])) numero=1;
       else f++;
    }
        if(!(maiuscula && minuscula && numero) || f!=0){
            printf("Senha invalida.\n");
        }else{
            printf("Senha valida.\n");
        }
}
    return 0;
}