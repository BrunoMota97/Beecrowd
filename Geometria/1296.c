#include <stdio.h>
#include<math.h>
int main() {
 
double a,b,c;

while(scanf("%lf %lf %lf\n",&a,&b,&c)!=EOF){
    double sm=(a+b+c)/2;
    double area=(4/3.0)*sqrt(sm*(sm-a)*(sm-b)*(sm-c));

    if(area>0) printf("%.3lf\n",area);
    else printf("%.3lf\n",-1.000);
}
 
    return 0;
}