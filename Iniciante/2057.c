#include <stdio.h>
 
int main() {
 
int s,t,f,soma;
scanf("%d %d %d\n",&s,&t,&f);
soma=s+t+f;
if(soma<0) printf("%d\n",soma+24);
else if(soma>=0 && soma<24) printf("%d\n",soma);
else printf("%d\n",soma-24);
return 0;
}