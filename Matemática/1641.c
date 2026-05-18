#include <stdio.h>
#include<math.h> 
int main() {
 
double r,w,l,d,diagonal;
int i=0;
while(scanf("%lf %lf %lf\n",&r,&w,&l)!=EOF){
    if(r==0) break;
    d=2*r;
    diagonal=sqrt(w*w + l*l);
    if(diagonal<=d) printf("Pizza %d fits on the table.\n",++i);
    else printf("Pizza %d does not fit on the table.\n",++i);
}
 
    return 0;
}