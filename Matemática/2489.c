#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main(){
  double a,r,d;
  while(scanf("%lf %lf %lf\n",&a,&d,&r)!=EOF){
    if(r==90.0) printf("%.4lf\n",a);
    else if(r<90.0) printf("%.4lf\n",a-(d/tan(r*(M_PI/180.0F))));
    else printf("%.4lf\n",a+d*tan((r-90)*(M_PI/180.0F)));
    }
    return 0;
}