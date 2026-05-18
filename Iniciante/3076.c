#include <stdio.h>
 
int main() {
 
int n,digito;
while(scanf("%d\n",&n)!=EOF){
digito=n%100;
if(digito!=0) printf("%d\n",(n/100)+1);
else printf("%d\n",n/100);
}
    return 0;
}