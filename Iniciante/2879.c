#include <stdio.h>
 
int main() {
 
int n,k,porta,c=0;
scanf("%d\n",&n);
k=n;
while(n--){
    scanf("%d\n",&porta);
    if(porta==1) c++;
}
printf("%d\n",k-c);
    return 0;
}