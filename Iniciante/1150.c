#include <stdio.h>
 
int main() {
 
int x,z,soma=0,conta=0;
scanf("%d\n%d\n",&x,&z);
while(z<=x){
    scanf("%d\n",&z);
}
for(int i=x;soma<z;i++){ 
  soma+=i,conta++;
}
printf("%d\n",conta);
    return 0;
}