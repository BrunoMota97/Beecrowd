#include <stdio.h>
 
int main() {
 
int n,c=0,soma=0;
scanf("%d\n",&n);
while(n>0){
    soma+=n;
    scanf("%d\n",&n);
    c++;
}
printf("%.2f\n",(float)soma/c);
    return 0;
}