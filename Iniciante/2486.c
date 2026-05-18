#include <stdio.h>
#include<string.h> 
int main() {
 
int t,n;
char fruta[20];
while(1){
    int soma=0;
    scanf("%i",&t);
    if(t==0) break;
    for(int i=0;i<t;++i){
    scanf("%i %[^\n\r]",&n,fruta);
    if(strcmp(fruta,"suco de laranja")==0){
       soma=soma+n*120; 
    }else if(strcmp(fruta,"morango fresco")==0){
       soma=soma+n*85;  
    }else if(strcmp(fruta,"mamao")==0){
       soma=soma+n*85;  
    }else if(strcmp(fruta,"goiaba vermelha")==0){
       soma=soma+n*70;  
    }else if(strcmp(fruta,"manga")==0){
       soma=soma+n*56 ; 
    }else if(strcmp(fruta,"laranja")==0){
        soma=soma+n*50; 
    }else{
        soma=soma+n*34; 
    }
    }
    if(soma<110) printf("Mais %d mg\n",110-soma);
    else if(soma>130) printf("Menos %d mg\n",soma-130);
    else printf("%d mg\n",soma);
    }
    return 0;
}