#include <stdio.h>
int main() {
int n;
double x,y,z;
scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%lf %lf %lf\n",&x,&y,&z);
    double media=(x*2+y*3+z*5)/10.0;
    printf("%.1lf\n",media);
}
    return 0;
}