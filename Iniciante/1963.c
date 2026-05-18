#include <stdio.h>
 
int main() {
 
float a,b;
scanf("%f %f\n",&a,&b);
float c=(float)b/a;
printf("%.2f%\n",(c-1)*100);
    return 0;
}