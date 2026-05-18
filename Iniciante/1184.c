#include <stdio.h>
int main() {
char o;
double n[12][12];
scanf("%c\n",&o);
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
     scanf("%lf",&n[i][j]);
    }
}
double soma=0.0;
for(int i=1;i<12;i++){
    for(int j=0;j<i;j++) soma+=n[i][j];
}
if(o=='S') printf("%.1lf\n",soma);
else printf("%.1lf\n",(soma/66.0));
    return 0;
}