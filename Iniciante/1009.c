#include <stdio.h>
 
int main() {
 
char nome[30];
double salario,valor;
scanf("%s\n",nome);
scanf("%lf\n%lf\n",&salario,&valor);
printf("TOTAL = R$ %.2lf\n",valor*0.150+salario);
    return 0;
}