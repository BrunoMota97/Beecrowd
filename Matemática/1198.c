#include <stdio.h>

int main() {
 
long long int a,b;
while(scanf("%lld %lld\n",&a,&b)!=EOF){
    printf("%lld\n",b>a? b-a: a-b);
}
 
    return 0;
}