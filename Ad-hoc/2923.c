#include <stdio.h>
 
int main() {
 
double t,a,w,c;

while(scanf("%lf %lf %lf %lf\n",&t,&a,&w,&c)!=EOF){
    double percentagem=(((double)a/t)*100);
    if(percentagem>=c) printf("critical\n");
    else if(percentagem>=w) printf("warning\n");
    else printf("OK\n");
}
    return 0;
}