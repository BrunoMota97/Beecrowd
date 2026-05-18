#include <stdio.h>
 
int main() {
 
long long int a,b;
scanf("%lld %lld\n",&a,&b);
long long int soma=((b-a+1)*(a+b))/2;
printf("%lld\n",soma);
 
    return 0;
}