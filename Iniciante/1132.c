#include <stdio.h>
int main() {
int x,y,soma=0,z;
scanf("%d\n%d\n",&x,&y);
if(x>y){
  z=y,y=x;
}else{
  z=x;
}
for(int i=z;i<=y;i++){
    if(i%13!=0) soma+=i;
}
printf("%d\n",soma);
    return 0;
}