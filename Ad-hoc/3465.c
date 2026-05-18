#include <stdio.h>
#include<math.h>
int main() {
 
double a,b,c;
scanf("%lf %lf %lf\n",&a,&b,&c);
double s=(a+b+c)/2;
double area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%.3lf m2\n",area);
    return 0;
}