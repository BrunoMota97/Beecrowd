#include <stdio.h>
int main() {
int a,b,c,aux;
scanf("%d %d %d\n",&a,&b,&c);
if(a<b) aux=a, a=b, b=aux;
if(b<c) aux=b, b=c, c=aux;
if(a<b) aux=a, a=b, b=aux;

if(a>=(b+c)){
  printf("Invalido\n");
}else{
    if(a==b && a==c)
         printf("Valido-Equilatero\n");
    else if(a==b || b==c || a==c)
         printf("Valido-Isoceles\n");
    else printf("Valido-Escaleno\n");
    
     printf("Retangulo: ");
     if((a*a)==(b*b + c*c)) printf("S\n");
     else printf("N\n");
}

    return 0;
}