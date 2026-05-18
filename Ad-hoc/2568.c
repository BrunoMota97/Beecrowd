#include <stdio.h>
 
int main() {
 
int d,i,x,f,soma=0;
scanf("%d %d %d %d\n",&d,&i,&x,&f);

  if(d%2==0){
    if((f-d)%2==0) soma=i;
    else soma=i-x;
  }else{
    if((f-d)%2==0) soma=i+x;
    else soma=i;
  }
printf("%d\n",soma);
 
    return 0;
}