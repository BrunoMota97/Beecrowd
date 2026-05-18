#include <stdio.h>
int main() {
int v;
scanf("%d\n",&v);
for(int i=0;i<1000;){
  for(int j=0;j<=v-1 && i<1000;j++,i++){
   printf("N[%d] = %d\n",i,j);
  }
}
    return 0;
}