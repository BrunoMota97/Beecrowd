#include <stdio.h>
#include<math.h>
#define PI 3.14 
int main() {
 
int n,f;
double area,preco;
char cor[3][10]={"vermelho","azul","amarelo"};
scanf("%d\n",&n);
while(n--){
    scanf("%lf\n",&area);
    double raio=sqrt(area/(4*PI));
    if(raio<=12){
         preco=area*0.09;
         f=0;
    }else if(raio<=15){
         preco=area*0.07;
         f=1;
    }else{
         preco=area*0.05;
         f=2;
    }
    printf("%s = R$ %.2lf\n",cor[f],preco);
}
    return 0;
}