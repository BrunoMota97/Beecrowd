#include <stdio.h>
 
int main() {
 
double c,i,n;
while(scanf("%lf %lf %lf\n",&c,&i,&n)!=EOF){
    double js=c*(1+i*n);
    double jc=c*pow((1+i),n);
    double diferenca=jc-js;
    printf("DIFERENCA DE VALOR = %.2lf\n",diferenca);
    printf("JUROS SIMPLES = %.2lf\n",js-c);
    printf("JUROS COMPOSTO = %.2lf\n",jc-c);
}
    return 0;
}