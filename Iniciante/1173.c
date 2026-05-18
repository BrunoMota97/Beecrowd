#include <stdio.h>
 
int main() {
int v;
scanf("%d\n",&v);
for(int i=0;i<10;i++,v*=2){
   printf("N[%d] = %d\n",i,v);
}
    return 0;
}