#include <stdio.h>
 
int main() {
 
int c,n;
scanf("%d\n",&c);
while(c--){
    scanf("%d\n",&n);
    if(n>8000) printf("Mais de 8000!\n");
    else printf("Inseto!\n");
}   
return 0;
}