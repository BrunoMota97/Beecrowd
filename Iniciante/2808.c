#include <stdio.h>
int main() {
 
char inicial[2],final[2];
int dif,dif1,dist;
scanf("%s %s\n",inicial,final);

dif=abs(final[0]-inicial[0]);
dif1=abs(final[1]-inicial[1]);

dist=dif*dif +dif1*dif1;
if(dist==5) printf("VALIDO\n");
else printf("INVALIDO\n");
    return 0;
}