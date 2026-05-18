#include <stdio.h>
 
int main() {
int m,n,saca,soma;
while(scanf("%d %d\n",&m,&n)!=EOF){
soma=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&saca);
        soma+=saca;
    }
}
printf("%d saca(s) e %d litro(s)\n",soma/60,soma%60);
}
    return 0;
}