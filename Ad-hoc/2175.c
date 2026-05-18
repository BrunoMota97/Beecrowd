#include <stdio.h>
 
int main() {
 
double o,b,i;
scanf("%lf %lf %lf\n",&o,&b,&i);
 if(o<b && o<i) printf("Otavio\n");
 else if(b<o && b<i) printf("Bruno\n",b);
 else if(i<o && i<b) printf("Ian\n",i);
 else printf("Empate\n");
    return 0;
}