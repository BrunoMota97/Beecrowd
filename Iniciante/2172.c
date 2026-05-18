#include <stdio.h>
int main() {
int x,m;
   scanf("%d %d\n",&x,&m); 
while(x!=0 && m!=0){
    printf("%d\n",x*m);
   scanf("%d %d\n",&x,&m); 
}
    return 0;
}