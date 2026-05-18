#include <stdio.h>
#include<math.h> 
int main() {
 
int r,l;
double pi=3.1415;
scanf("%d %d\n",&r,&l);
double volume=(4/3.0)*pi*(r*r*r);
 printf("%.0lf\n",floor(l/volume));
    return 0;
}