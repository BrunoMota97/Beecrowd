#include <stdio.h>
int main() {
int n,v1,v2,res;
char op;
scanf("%d\n",&n);
scanf("%d %c %d",&v1,&op,&v2);
    if(op=='+') res=v1+v2;
    if(op=='*') res=v1*v2;
    
    if(res<=n) printf("OK\n");
    else printf("OVERFLOW\n");

    return 0;
}