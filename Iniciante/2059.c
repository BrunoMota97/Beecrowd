#include <stdio.h>
 
int main() {
 
int p,j1,j2,r,a,soma;
scanf("%d %d %d %d %d\n",&p,&j1,&j2,&r,&a);
soma=j1+j2;

if((a==1 && r==1) || r==a && ((p==1 && soma%2!=0) || (p==0 && soma%2==0))) printf("Jogador 2 ganha!\n");
else printf("Jogador 1 ganha!\n");

    return 0;
}