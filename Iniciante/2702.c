#include <stdio.h>
 
int main() {
 
int ca,ba,pa,cr,br,pr,res=0;
scanf("%d %d %d\n%d %d %d\n",&ca,&ba,&pa,&cr,&br,&pr);
if(ca<cr) res+=cr-ca;
if(ba<br) res+=br-ba;
if(pa<pr) res+=pr-pa;
printf("%d\n",res);
 
    return 0;
}