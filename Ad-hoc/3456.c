#include <stdio.h>
 
int main() {
long long int x;
scanf("%lld\n",&x);
printf("%lld\n",x);
    while(x>9){
        x=(x/10)*3 +(x%10);
        printf("%lld\n",x);
    }
    return 0;
}