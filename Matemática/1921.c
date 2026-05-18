#include <stdio.h>
 
int main() {
unsigned long long int n;
scanf("%llu\n",&n);
unsigned long long int v=(n*n - 3*n)/2;
printf("%llu\n",v);
    return 0;
}