#include <stdio.h>
 
int main() {
 
int c,p,f,res;
scanf("%d %d %d\n",&c,&p,&f);
res=p/(c*f);

if(res>0) printf("S\n");
else printf("N\n");
 
    return 0;
}