#include <stdio.h>
int main() {
int n,horas;
float q;
scanf("%d\n%d\n%f\n",&n,&horas,&q);
printf("NUMBER = %d\nSALARY = U$ %.2f\n",n,(float)horas*q);
    return 0;
}