#include <stdio.h>
int main() {
int t,n,k,m;
scanf("%d\n",&t);
while(t--){
    scanf("%d %d\n",&n,&k);
    m=n/k,k=n-m*k;
    printf("%d\n",m+k);
}
    return 0;
}