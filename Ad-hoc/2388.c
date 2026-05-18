#include <stdio.h>
 
int main() {
 
int n,t,v,soma=0;
scanf("%d\n",&n);
while(n--){
  scanf("%d %d\n",&t,&v);  
  soma+=(t*v);
}
 printf("%d\n",soma);
    return 0;
}