#include <stdio.h>
#include<math.h> 

int main() {
 
int q,l,r,c;
scanf("%d\n",&q);
while(q--){
    scanf("%d %d\n",&l,&r);
    c=floor(sqrt(r))-ceil(sqrt(l));
    printf("%d\n",c+1);
}
    return 0;
}