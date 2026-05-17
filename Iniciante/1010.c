#include <stdio.h>
int main() {
int code,n1,n2;
float price1,price2;
scanf("%d %d %f\n%d %d %f\n",&code,&n1,&price1,&code,&n2,&price2);
printf("VALOR A PAGAR: R$ %.2f\n",n1*price1+n2*price2);
    return 0;
}