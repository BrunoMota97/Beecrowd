#include <stdio.h>
 
int main() {
 
int a,b,c,d,e,soma=225;
scanf("%d\n%d\n%d\n%d\n%d\n",&a,&b,&c,&d,&e);
soma+=a*300 +b*1500+c*600+d*1000+e*150;
printf("%d\n",soma);
    return 0;
}