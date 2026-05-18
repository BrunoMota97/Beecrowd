#include <stdio.h>
 
int main() {
 
double x,y;
int i=0;
while(scanf("%lf %lf\n",&x,&y)!=EOF){
    double taxa= ((y/x) -1)*100;
    printf("Projeto %d:\nPercentual dos juros da aplicacao: %.2lf %\n\n",++i,taxa);
}
    return 0;
}