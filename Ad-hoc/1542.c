#include <stdio.h>
 
int main() {
 
int q,d,p;
while(1){
 scanf("%d %d %d\n",&q,&d,&p);
 if(q==0) break;
 int l =(d*p*q)/(p-q);
if(l==1) printf("%d pagina\n",l);
else printf("%d paginas\n",l);
}
    return 0;
}