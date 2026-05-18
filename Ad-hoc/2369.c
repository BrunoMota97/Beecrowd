#include <stdio.h>
int main() {
int n,p=7;
scanf("%d\n",&n);
while(n>10){
if(n>=11 && n<=30) p++;
if(n>=31 && n<=100) p=p+2;
if(n>100) p=p+5;
n--;
}
printf("%d\n",p);
    return 0;
}