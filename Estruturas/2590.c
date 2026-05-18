#include <stdio.h>
int main() {
 
int t;
long long int n;
scanf("%d\n",&t);
while(t--){
    scanf("%lld\n",&n);
    int v=n%4;
    if(v==1) printf("7\n");
    else if(v==2) printf("9\n");
    else if(v==3) printf("3\n");
    else printf("1\n");
}
 
    return 0;
}