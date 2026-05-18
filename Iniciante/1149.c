#include <stdio.h>
 
int main() {
 
int a,n,soma=0;
scanf("%d\n",&a);
scanf("%d\n",&n);
while(n<=0){
    scanf("%d\n",&n);
}
while(n--){
    soma+=a;
    a++;
}
printf("%d\n",soma);
    return 0;
}