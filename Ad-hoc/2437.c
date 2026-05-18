#include <stdio.h>
#include<math.h> 
int main() {
 
int xm,ym,xr,yr;
scanf("%d %d %d %d\n",&xm,&ym,&xr,&yr);
int dist=abs(xm-xr)+abs(ym-yr);
printf("%d\n",dist);
 
    return 0;
}