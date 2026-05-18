#include <stdio.h>
#include<math.h> 
int main() {
 
int c,n,m;
scanf("%d\n",&c);
while(c--){
    scanf("%d %d\n",&n,&m);
    double q=(double)n/m;
    int r=ceil(q);
    printf("%d\n",r);
}
    return 0;
}