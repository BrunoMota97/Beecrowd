#include <stdio.h>
 
int main() {
 
int m,n[41],c[41],i,parcela1,parcela2;
while(scanf("%d\n",&m)!=EOF){
for(i=0;i<m;i++) scanf("%d %d\n",&n[i],&c[i]);


for(i=0,parcela1=0,parcela2=0;i<m;i++){
    parcela1+=(n[i]*c[i]);
    parcela2+=c[i];
}
printf("%.4lf\n",(double)parcela1/(parcela2*100));
}
    return 0;
}