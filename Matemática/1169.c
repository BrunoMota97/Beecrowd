#include <stdio.h>
#include<math.h>
int main() {
 
int n,x;
scanf("%d\n",&n);
while(n--){
    scanf("%d\n",&x);
    unsigned long long int kilos=(pow(2,x)-1)/12000;
    printf("%llu kg\n",kilos);
}
    return 0;
}