#include <stdio.h>
#include<math.h> 
int main() {
int v,n,i;
scanf("%d %d\n",&v,&n);
double r=v*n;
for(i=1;i<=8;i++) printf("%d ",(int)ceil((r*i)/10.0));
printf("%d\n",(int)ceil((r*i)/10.0));
    return 0;
}