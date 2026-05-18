#include <stdio.h>
 
int main() {
 
float salario;
scanf("%f\n",&salario);
if(salario<=2000.00) printf("Isento\n");
else if(salario<=3000.00) printf("R$ %.2f\n",(salario-2000.00)*0.08);
else if(salario<=4500.00) printf("R$ %.2f\n",1000*0.08 + (salario-3000.01)*0.18);
else printf("R$ %.2f\n",1000*0.08 + 1500*0.18+(salario-4500.00)*0.28);
    return 0;
}