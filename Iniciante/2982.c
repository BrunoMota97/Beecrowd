#include <stdio.h>
 
int main() {
 
int n,v;
char c;
scanf("%d\n",&n);
int governo=0,universidade=0;
for(int i=1;i<=n;i++){
    scanf("%c %d\n",&c,&v);
    if(c=='V') governo+=v;
    else universidade+=v;
}
if(governo<universidade) printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
else printf("A greve vai parar.\n");
 
    return 0;
}