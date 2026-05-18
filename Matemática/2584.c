#include <stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
int main() {
 
int c,n;
scanf("%d\n",&c);
while(c--){
    scanf("%d\n",&n);
    double ap= n/(2*tan(36.0 * M_PI/180.0 ));
    double area=(5*n*ap)/2;
    printf("%.3lf\n",area);
}  
return 0;
}