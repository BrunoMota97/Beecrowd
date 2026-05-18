#include <stdio.h>
 
int main() {
 
double v,d,raio,area;

while(scanf("%lf %lf\n",&v,&d)!=EOF){
    raio=d/2;
    area = raio*raio*3.14;
    printf("ALTURA = %.2lf\n",v/area);
    printf("AREA = %.2lf\n",area);
}
 
    return 0;
}