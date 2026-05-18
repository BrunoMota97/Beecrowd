#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d\n",&a,&b,&c);
   int r=a/2,s=b/3,t=c/5;
   if(r<=s && r<=t) printf("%d\n",r);
   else if(s<=t && s<=r) printf("%d\n",s);
   else printf("%d\n",t);
    return 0;
}