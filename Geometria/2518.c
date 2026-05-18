#include <stdio.h>
 #include<math.h>
int main() {
 
int n,h,c,l;
while(scanf("%d\n%d %d %d\n",&n,&h,&c,&l)!=EOF){
    double lado=sqrt(c*c+h*h);
    printf("%.4lf\n",(n*lado*l)/10000);
}
return 0;
}