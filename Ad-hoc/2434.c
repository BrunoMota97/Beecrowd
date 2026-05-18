#include <stdio.h>
 
int main() {
 
int n,s,m,saldo,min;
scanf("%d %d\n",&n,&s);
saldo=s;
min=saldo;
while(n--){
    scanf("%d\n",&m);
    saldo+=m;
    if(saldo<min) min=saldo;
}
 printf("%d\n",min);
    return 0;
}