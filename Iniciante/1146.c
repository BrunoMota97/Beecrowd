#include <stdio.h>
 
int main() {
 
int x,i;
scanf("%d\n",&x);
while(x!=0){
    for( i=1;i<x;i++) printf("%d ",i);
    printf("%d\n",i);
    scanf("%d\n",&x);
}
 
    return 0;
}