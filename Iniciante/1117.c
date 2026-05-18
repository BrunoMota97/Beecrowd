#include <stdio.h>
 
int main() {
 
float n,soma=0.0,c=0;
while(c<2){
    scanf("%f\n",&n);
    if(n>=0 && n<=10){
        soma+=n;
        c++;
    }else{
        printf("nota invalida\n");
    }
}
printf("media = %.2f\n",soma/c);
    return 0;
}