#include <stdio.h>
#include<math.h> 
int main() {
 
int n,l,d;
scanf("%d %d %d\n",&n,&l,&d);
float a= (float)n * d/(l*1000);
int b=ceil(a);
printf("%d\n",b*l);
    return 0;
}