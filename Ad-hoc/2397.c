#include <stdio.h>
int main() {
int a,b,c,aux;
scanf("%d %d %d\n",&a,&b,&c);
if(a<b) aux=a, a=b, b=aux;
if(b<c) aux=b, b=c, c=aux;
if(a<b) aux=a, a=b, b=aux;

if(a>=(b+c)){
  printf("n\n");
}else{
   if((a*a)==(b*b + c*c)){
        printf("r\n");
   } else if((a*a)<(b*b +c*c)){ 
       printf("a\n");
    }else{
         printf("o\n");
    }
}
    return 0;
}