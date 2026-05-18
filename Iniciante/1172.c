#include <stdio.h>
int main() {
int ar[10];
for(int i=0;i<10;i++){
    scanf("%d\n",&ar[i]);
    if(ar[i]<=0) ar[i]=1;
    printf("X[%d] = %d\n",i,ar[i]);
}
    return 0;
}