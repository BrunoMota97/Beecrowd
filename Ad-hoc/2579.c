#include <stdio.h>
 
int main() {
 
int l,c,x,y;
scanf("%d %d %d %d\n",&l,&c,&x,&y);
if(x%2==0 || c%2==0) printf("%s\n",y%2==0?"Direita":"Esquerda");
else printf("%s\n",y%2==0?"Esquerda":"Direita");
    return 0;
}