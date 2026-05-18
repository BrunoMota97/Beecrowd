#include <stdio.h>
#include<math.h>
int main() {
 
int h,m,medicoes;
double x[100001],soma,s;
while(scanf("%d %d\n",&h,&m)!=EOF){
medicoes=(60*h)/m;
soma=0.0;
for(int i=0;i<medicoes;i++){
    scanf("%lf",&x[i]);
    soma+=x[i];
}
s=0.0;
double media=(double)soma/medicoes;
for(int i=0;i<medicoes;i++){
    s+=pow(x[i]-media,2);
}
printf("%.5lf\n",sqrt(s/(medicoes-1)));
}
    return 0;
}