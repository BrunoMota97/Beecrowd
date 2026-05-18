#include <stdio.h>
 
int main() {
 
int n,c,s,e,saldo=0,flag=0;
scanf("%d %d\n",&n,&c);
while(n--){
    scanf("%d %d\n",&s,&e);
    saldo+=(-s+e);
    if(saldo>c) flag=1;
}
if(flag) printf("S\n");
else printf("N\n");
    return 0;
}