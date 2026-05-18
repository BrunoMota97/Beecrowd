#include <stdio.h>
int main() {
int a,b,c;
scanf("%d %d %d\n",&a,&b,&c);
if(a+b==c || b+c==a || a+c==b || a==b || b==c || a==c) printf("S\n");
else printf("N\n");
 
    return 0;
}