#include <stdio.h>
 
int main() {
 int n,posicao,metade,soma=0,i;
scanf("%d\n",&n);
int a[n];
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  soma+=a[i];
}
metade=soma/2;
for(i=0,soma=0;soma<metade;i++){
    soma+=a[i];
    if(soma>=metade) posicao=i;
}
printf("%d\n",i);
    return 0;
}