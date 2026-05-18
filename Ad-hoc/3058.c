#include <stdio.h>
 
int main() {
int n,g;
double p,preco,min;
 scanf("%d\n",&n);
scanf("%lf %d\n",&p,&g);
preco=(1000*p)/g;
min=preco;
 while(n>1){
    scanf("%lf %d\n",&p,&g);
    preco=(1000*p)/g;
    if(preco<min) min=preco;
        n--;
 }
     printf("%.2lf\n",min);
    return 0;
}