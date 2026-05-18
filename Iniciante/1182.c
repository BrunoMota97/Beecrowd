#include <stdio.h>
int main() {
char o;
double m[12][12];
int l;
scanf("%d\n",&l);
scanf("%c\n",&o);
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
     scanf("%lf",&m[i][j]);
    }
}
double soma=0.0;
for(int i=0;i<12;i++) soma+=m[i][l];
if(o=='S') printf("%.1lf\n",soma);
else printf("%.1lf\n",(soma/12.0));
    return 0;
}