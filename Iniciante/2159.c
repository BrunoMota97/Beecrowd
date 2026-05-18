#include <stdio.h>
#include<math.h>
int main() {
 
int n;
scanf("%d\n",&n);
double k=n/log(n);
printf("%.1lf %.1lf\n",k,1.25506*k);
 
    return 0;
}