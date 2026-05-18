#include <stdio.h>
 
int main() {
 
double x,ar[100],k;
scanf("%lf\n",&x);
ar[0]=x,k=ar[0];
printf("N[0] = %.4lf\n",ar[0]);
for(int i=1;i<100;i++){
    k/=2,ar[i]=k;
    printf("N[%d] = %.4lf\n",i,ar[i]); 
}
    return 0;
}