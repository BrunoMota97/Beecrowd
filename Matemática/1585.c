#include <stdio.h>
 
int main() {
 
int n,x,y;
scanf("%d\n",&n);
while(n--){
    scanf("%d %d\n",&x,&y);
    printf("%d cm2\n",(x*y)/2);
}
 
    return 0;
}