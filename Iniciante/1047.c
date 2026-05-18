#include <stdio.h>
int main() {
int h1,m1,h2,m2;
scanf("%d %d %d %d\n",&h1,&m1,&h2,&m2);
if(h1<h2){
    if(m1<m2) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2-h1,m2-m1);
    else if(m1==m2) printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",h2-h1);
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(h2-h1)-1,(m2-m1)+60);
}else if(h1==h2){
  if(m1<m2) printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",m2-m1);
  else if(m1==m2) printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  else printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",(m2-m1)+60);
}else{
    if(m1<m2) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(h2-h1)+24,m2-m1);
    else if(m1==m2) printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",(h2-h1)+24);
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(h2-h1)+23,m2-m1+60);
}
    return 0;
}