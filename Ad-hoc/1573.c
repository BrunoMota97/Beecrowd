#include <stdio.h>
 
int main() {
float a,b,c,volume;
    scanf("%f %f %f\n",&a,&b,&c);
while(a!=0 && b!=0 && c!=0){
    if(a==0 && b==0 && c==0) break;
    volume=a*b*c;
    printf("%.0f\n",floor(pow(volume,(1.0/3.0))));
    scanf("%f %f %f\n",&a,&b,&c);
}
    return 0;
}