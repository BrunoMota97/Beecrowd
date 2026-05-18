#include <stdio.h>
 
int main() {
 
double t,n;
scanf("%lf\n",&t);
while(t--){
    scanf("%lf\n",&n);
    printf("%0.lf\n",ceil(n/2)); 
}
    return 0;
}