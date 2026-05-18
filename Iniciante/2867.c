#include <stdio.h>
#include<math.h> 
int main() {
int c,n,m,numero;
while(scanf("%d\n",&c)!=EOF){
while(c--){
    scanf("%d %d\n",&n,&m);
    numero=pow(n,m);
    printf("%.0lf\n",floor(m*log10(n))+1);
}
}
    return 0;
}