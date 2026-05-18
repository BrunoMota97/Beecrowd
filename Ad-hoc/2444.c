#include <stdio.h>
 
int main() {
 
int v,t,a;
scanf("%d %d\n",&v,&t);
int soma=v;
for(int i=0;i<t;i++){
    scanf("%d\n",&a);
    soma+=a;
    if(soma>100) soma=100;
    else if(soma<0) soma=0;
}
printf("%d\n",soma);
    return 0;
}