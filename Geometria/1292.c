#include <stdio.h>
#include<math.h>
#define PI 3.14159265358979323846
int main() {
double f;
while(scanf("%lf\n",&f)!=EOF){
    double lado= (f*sin(108*PI/180))/(sin(63*PI/180));
    printf("%.10lf\n",lado);
}
    return 0;
}