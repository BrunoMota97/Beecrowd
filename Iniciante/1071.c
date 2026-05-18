#include <stdio.h>
int main() {
int x,y,soma=0,z;
scanf("%d\n%d\n",&x,&y);
if(x>y){
     z=x;
     x=y;
}else{
    z=y;
}
for(int i=x+1;i<z;i++){
    if(i%2!=0) soma+=i;
}
printf("%d\n",soma);
    return 0;
}