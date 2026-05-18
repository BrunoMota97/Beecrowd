#include <stdio.h>
int main() {
int n,j,k,l;
scanf("%d\n",&n);
for(int i=1,c=1,a=2,k=1;i<=n;i++,a+=2){
  k=i*i*i;
   for(j=0,l=k;j<2;j++,c++,l++){
    printf("%d %d %d\n",i,c,l);
   }
   c+=(a-1);
}
    return 0;
}