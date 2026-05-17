#include <stdio.h>
 
int main() {
 
int dias,ano,mes,resto,dif;
scanf("%d\n",&dias);

ano=dias/365, dif=dias-ano*365, mes=dif/30,resto=(dif-mes*30);
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,resto);
    return 0;
}