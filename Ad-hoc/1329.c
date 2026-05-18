#include <stdio.h>
 
int main() {
int n,x,y,r;
while(scanf("%d\n",&n)!=0){
  x=0,y=0;
  if(n==0) break;
for(int i=0;i<n;i++){
    scanf("%d",&r);
    if(r==0) x++;
    else y++;
}
printf("Mary won %d times and John won %d times\n",x,y);
}
    return 0;
}