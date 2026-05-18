#include <stdio.h>
int main() {
int t,n;
scanf("%d\n",&t);
while(t--){
    scanf("%d\n",&n);
    if(n%2==0) printf("1\n");
    else printf("9\n");
}   
return 0;
}