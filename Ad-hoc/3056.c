#include <stdio.h>
#include<math.h>
int main() {
 
unsigned long long int n,l;
scanf("%llu\n",&n);
 l=pow(2,n);
printf("%llu\n",(l+1)*(l+1));
    return 0;
}