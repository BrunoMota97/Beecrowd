#include <stdio.h>
int main() {
int x,y,k,j;
scanf("%d %d\n",&x,&y);
for(int i=1;i<=y;i+=x){
    for(j=1,k=i;j<x;j++,k++){
      printf("%d ",k);
    }
    printf("%d\n",k);
}
    return 0;
}