#include <stdio.h>
int main() {
 double soma=1.0;
for(int i=1,potencia=1,b=2,k=3;i<=20;i++,k+=2){
  potencia*=b, soma+=((double)k/(potencia));
}
printf("%.2lf\n",soma);
    return 0;
}