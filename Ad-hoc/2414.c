#include <stdio.h>
int main() {
 int max=-1,n;
while(n!=0){
    scanf("%d",&n);
    if(n>max) max=n;
}
printf("%d\n",max);
    return 0;
}