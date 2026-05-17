#include <stdio.h>
#include<math.h>
int main() {
int n;
double h,m,s;
scanf("%d\n",&n);
h=n/3600.0;
m=(h-floor(h))*60;
s=(m-floor(m))*60;
printf("%.lf:%.lf:%.lf\n",floor(h),floor(m),s);
    return 0;
}