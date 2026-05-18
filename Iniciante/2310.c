#include <stdio.h>
 
int main() {
 
int n,s,b,a,s1,b1,a1,saque=0,bloqueio=0,ataque=0,sucesso1=0,sucesso2=0,sucesso3=0;
char c[10];
scanf("%d\n",&n);
while(n--){
 scanf("%s\n",c);
 scanf("%d %d %d\n%d %d %d\n",&s,&b,&a,&s1,&b1,&a1);
 saque+=s,bloqueio+=b,ataque+=a,sucesso1+=s1,sucesso2+=b1,sucesso3+=a1;
}
 printf("Pontos de Saque: %.2lf %%.\n",(double)sucesso1/saque*100);
 printf("Pontos de Bloqueio: %.2lf %%.\n",(double)sucesso2/bloqueio*100);
 printf("Pontos de Ataque: %.2lf %%.\n",(double)sucesso3/ataque*100);
    return 0;
}