#include <stdio.h>
 
int main() {
 
int t,a,b,c,d,e,conta=0;
scanf("%d\n%d %d %d %d %d\n",&t,&a,&b,&c,&d,&e);
if(a==t) conta++;
if(b==t) conta++;
if(c==t) conta++;
if(d==t) conta++;
if(e==t) conta++;
printf("%d\n",conta);
    return 0;
}