#include <stdio.h>
#include<math.h>
int main() {
 
double a,b,c;
scanf("%lf %lf %lf\n",&a,&b,&c);
double delta = b*b -4*a*c;

if(delta<0 || a==0) printf("Impossivel calcular\n");
else if(delta==0) printf("R1 = %.5lf\n",-b/(2*a));
else printf("R1 = %.5lf\nR2 = %.5lf\n",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
    return 0;
}