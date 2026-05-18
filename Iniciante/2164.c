#include <stdio.h>
#include<math.h> 
int main() {
 
double n,a,b;
scanf("%lf\n",&n);
a=(1+sqrt(5))/2;
b=(1-sqrt(5))/2;
printf("%.1lf\n",((pow(a,n)-pow(b,n))/sqrt(5)));
    return 0;
}