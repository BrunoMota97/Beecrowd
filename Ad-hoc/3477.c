#include <stdio.h>
 
int main() {
 
int x,y,z,max,circulo;
scanf("%d %d %d\n",&x,&y,&z);
    if(x*x == z*z + y*y){
        double r=z/2.0,l=y+(3*z/4.0);
      printf("AREA = %0.lf\n",l*r); 
    }else printf("Nao eh retangulo!\n");
    return 0;
}