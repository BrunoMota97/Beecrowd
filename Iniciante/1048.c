#include <stdio.h>
 
int main() {
 
float salario,reajuste,novo;
int taxa;
scanf("%f\n",&salario);
if(salario>=0 && salario<=400.00){
  reajuste=salario*0.15,novo=salario+reajuste,taxa=15;
  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",novo,reajuste,taxa);
}else if(salario>=400.01 && salario<=800.00){
  reajuste=salario*0.12, novo=salario+reajuste, taxa=12;
  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",novo,reajuste,taxa);
}else if(salario>=800.01 && salario<=1200.00){
  reajuste=salario*0.10,novo=salario+reajuste,taxa=10;
  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",novo,reajuste,taxa);
}else if(salario>=1200.01 && salario<=2000.00){ 
  reajuste=salario*0.07,novo=salario+reajuste,taxa=7;
  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",novo,reajuste,taxa);
}else{
  reajuste=salario*0.04,novo=salario+reajuste,taxa=4;
  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",novo,reajuste,taxa);
} 
    return 0;
}