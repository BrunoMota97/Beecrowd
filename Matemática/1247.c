#include <stdio.h>
#include<math.h> 
int main() {
 
double s,va,vb;
while(scanf("%lf %lf %lf\n",&s,&va,&vb)!=EOF){
     double dist=sqrt(144+s*s)/12;
     if(vb>=va*dist) printf("S\n");
     else printf("N\n");
}
    return 0;
}