#include <stdio.h>
 
int main() {
 
double l;

while(l!=0){
    scanf("%lf\n",&l);
    if(l==0) break;
    double v = (l-3)/l;
    printf("%.6lf\n",v);
}
    return 0;
}