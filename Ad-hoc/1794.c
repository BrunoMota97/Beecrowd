#include <stdio.h>
int main() {
int n,la,lb,sa,sb;
scanf("%d\n %d %d\n %d %d\n",&n,&la,&lb,&sa,&sb);
if((n>=la && n<=lb) && (n>=sa && n<=sb)) printf("possivel\n");
else printf("impossivel\n");
    return 0;
}