#include <stdio.h>
 
int main() {
 
int p,code,q;
float preco=0;
scanf("%d\n",&p);
while(p--){
    scanf("%d %d\n",&code,&q);
    switch(code){
        case 1001: preco+=1.50*q;
        break;
        case 1002: preco+=2.50*q;
        break;
        case 1003: preco+=3.50*q;
        break;
        case 1004: preco+=4.50*q;
        break;
        case 1005: preco+=5.50*q;
        break;
    }
}
printf("%.2f\n",preco);
    return 0;
}