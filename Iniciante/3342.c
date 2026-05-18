#include <stdio.h>
 
int main() {
 
int n,brancas,pretas;
scanf("%d\n",&n);
pretas=(n*n)/2, brancas=n*n-pretas;
if(n%2==0) printf("%d casas brancas e %d casas pretas\n",pretas,pretas);
else printf("%d casas brancas e %d casas pretas\n",brancas,pretas);
    return 0;
}