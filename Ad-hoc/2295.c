#include <stdio.h>
 
int main() {
 
double a,g,ra,rg;
scanf("%lf %lf %lf %lf\n",&a,&g,&ra,&rg);

if((ra/a)>(rg/g)) printf("A\n");
else printf("G\n");

    return 0;
}