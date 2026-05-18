#include <stdio.h>
 
int main() {
 
double s,va,vb;
while(scanf("%lf %lf %lf\n",&s,&va,&vb)!=EOF){
     if(va<vb) printf("impossivel\n");
     else{     double tempo=s/(va-vb);printf("%.2lf\n",tempo);}
}
    return 0;
}