#include <stdio.h>
 
int main() {
 
int n,a,l,p;
scanf("%d\n%d %d %d\n",&n,&a,&l,&p);
if(n>a || n>l || n>p) printf("N\n");
else printf("S\n");
 
    return 0;
}