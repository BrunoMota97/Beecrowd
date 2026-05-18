#include <stdio.h>
 
int main() {
int t,n;
scanf("%d\n",&t);
while(t--){
    scanf("%d\n",&n);
    unsigned long long int soma=pow(2,n);
    printf("%llu\n",soma-1);
}
    return 0;
}