#include <stdio.h>
 
int main() {
 
int a,b,c,d;
scanf("%d %d %d %d\n",&a,&b,&c,&d);
if((a+b>c && b+c>a && c+a>b) || (b+c>d && b+d>c && c+d>b) || (a+c>d && a+d>c && c+d>a) || (a+b>d && b+d>a && d+a>b))printf("S\n");
else printf("N\n");
    
    return 0;
}