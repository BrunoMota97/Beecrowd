#include <stdio.h>
 
int main() {
 
int a,b;
scanf("%d %d\n",&a,&b);
int r=a%b;
if(r<0){
  if(b<0) r-=b;
  else r+=b;
}
printf("%d %d\n",(a-r)/b,r);
    return 0;
}