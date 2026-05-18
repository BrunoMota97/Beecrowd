#include <stdio.h>
 
int main() {
 
double s,b,c;
scanf("%lf %lf %lf\n",&s,&b,&c);
double r=(double)(s*b*c)/(b*c+s*c+b*s);
printf("%.3lf\n",r);
 
    return 0;
}