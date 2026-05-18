#include <stdio.h>
 
int main() {
 
int n;
scanf("%d\n",&n);
double soma=0.0;
for(int i=n;i>0;i--){
    soma+=6.0;
    soma=(1.0/soma);
}
printf("%.10lf\n",soma+3);
    return 0;
}