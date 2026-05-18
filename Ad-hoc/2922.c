#include <stdio.h>
#include<math.h> 
int main() {
 
int b,u;
while(scanf("%d %d\n",&b,&u)!=EOF){
    if(u>b)printf("%d\n",u-b-1);
    else if(u<b) printf("%d\n",b-u-1);
    else printf("0\n");
}
    return 0;
}