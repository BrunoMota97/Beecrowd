#include <stdio.h>
 
int main() {
 
int h1,m1,h2,m2,duracao;
while(1){
  scanf("%d %d %d %d\n",&h1,&m1,&h2,&m2);
  if(h1==0 && h2==0 && m1==0 && m2==0) break;
 if(h1<h2){
     if(m1<m2) duracao=(h2-h1)*60 + (m2-m1);
     else if(m1==m2) duracao=(h2-h1)*60;
     else duracao=(h2-h1-1)*60 + (m2-m1)+60;
 }else if(h1==h2){
     if(m1<m2) duracao= m2-m1;
     else if(m1==m2) duracao=24*60;
     else duracao=24*60 + (m2-m1);
 }else{
     if(m1<m2) duracao=(h2-h1+23)*60 + (m2-m1)+60;
     else if(m1==m2) duracao=(h2-h1+24)*60;
     else duracao=(h2-h1+23)*60 + (m2-m1)+60;
  }
 
 printf("%d\n",duracao);
}
    return 0;
}