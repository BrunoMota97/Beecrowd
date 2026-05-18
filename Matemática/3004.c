#include <stdio.h>
#include<math.h>
int main() {
 
int n,c1,l1,c2,l2,min1,min2,min3,min4;
scanf("%d\n",&n);
while(n--){
    scanf("%d %d %d %d\n",&c1,&l1,&c2,&l2);
    min1=fmin(c1,l1);
    if(min1==c1) min3=l1;
    else min3=c1;
    min2=fmin(c2,l2);
    if(min2==c2) min4=l2;
    else min4=c2;
    if(min1<min2 && min3<min4)printf("S\n");
    else printf("N\n");
}
    return 0;
}