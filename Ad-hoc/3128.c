#include <stdio.h>
 
int main() {
 
int a,b;
scanf("%d\n%d\n",&a,&b);
if((a>=6 && b>=6) && ((a>=18 || b>=18) || (a>=14 && b>=14))) printf("YES\n");
else printf("NO\n");
    return 0;
}