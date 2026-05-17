#include <stdio.h>
int main() {
double a,b,c,tri,circ,tra;
scanf("%lf %lf %lf\n",&a,&b,&c);
tri=(a*c)/2;
circ=3.14159*c*c;
tra=((a+b)/2)*c;
printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,circ,tra,b*b,a*b);
    return 0;
}