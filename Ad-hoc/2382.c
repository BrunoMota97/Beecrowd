#include <stdio.h>
#include<math.h> 
int main() {
 
int l,a,p,r;
scanf("%d %d %d %d\n",&l,&a,&p,&r);

int diametro=2*r;
double diagonal= sqrt(l*l + a*a + p*p);
 
 if(diametro>=diagonal) printf("S\n");
 else printf("N\n");
    return 0;
}