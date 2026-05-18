#include <stdio.h>
 
int main() {
 
int n[2],d[2],v[2];
double tempo1,tempo2;
scanf("%d %d %d\n%d %d %d\n",&n[0],&d[0],&v[0],&n[1],&d[1],&v[1]);
tempo1=(d[0]/1000.0)/v[0];
tempo2=(d[1]/1000.0)/v[1];
if(tempo1<tempo2) printf("%d\n",n[0]);
else printf("%d\n",n[1]);
    return 0;
}