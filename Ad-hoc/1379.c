#include <stdio.h>
 
int main() {
int a,b;
scanf("%d %d\n",&a,&b);
while(a!=0 && b!=0){
if(a==0 && b==0) break;
printf("%d\n",2*a-b);
scanf("%d %d\n",&a,&b);
}
    return 0;
}