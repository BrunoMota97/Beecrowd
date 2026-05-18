#include <stdio.h>
 
int main() {
 
double p,t;
scanf("%lf %lf\n",&p,&t);
printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5lf.\n",(p*t)/2.0);
    return 0;
}