#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897

void areas(double a,double b,double c){
  double raioamarelo=(a*b*c)/(sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
  double area_circulo_grande=PI*(raioamarelo*raioamarelo);
  double p=(a+b+c)/2;
  double areatriangulo=sqrt(p*((p-a)*(p-b)*(p-c)));
  double raiovermelho=areatriangulo/p;
  double areavermelho=PI*(raiovermelho*raiovermelho);
  double areavioleta=areatriangulo-areavermelho;
  double areamarelo=area_circulo_grande-areatriangulo;
    printf("%.4lf %.4lf %.4lf\n",areamarelo,areavioleta,areavermelho);
}
int main(){

double a,b,c;
while(scanf("%lf %lf %lf\n",&a,&b,&c)!=EOF){
  areas(a,b,c);
}
return 0;
}