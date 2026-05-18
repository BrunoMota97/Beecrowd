#include <stdio.h>
int main() {
 
int n,x;
scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%d\n",&x);
    int conta=0;
    for(int j=1;j<=x;j++){
        if(x%j==0) conta++;
    }
    if(conta==2) printf("%d eh primo\n",x);
    else printf("%d nao eh primo\n",x);
}
    return 0;
}