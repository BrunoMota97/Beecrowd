#include <stdio.h>
 
int main() {
 
double f1,f2,flutuacao;
scanf("%lf %lf\n",&f1,&f2);
flutuacao=((((1.0 + f1/100.00) * (1.0 + f2/100.00)) - 1.0) * 100.0);
 printf("%.6lf\n",flutuacao);
    return 0;
}