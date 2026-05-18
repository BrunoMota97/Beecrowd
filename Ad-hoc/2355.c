#include <stdio.h>
#include<math.h>
int main() {
 
double n,a,b;
while(scanf("%lf\n",&n)!=0){
    if(n==0) break;
    b=floor(n/90);
    a=ceil(7*n/90);
    printf("Brasil %.lf x Alemanha %.lf\n",b,a);
}
    return 0;
}