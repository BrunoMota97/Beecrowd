#include <stdio.h>
int main() {
float soma=0,n;
int p=0;
for(int i=0;i<6;i++){
    scanf("%f\n",&n);
    if(n>0){
        p++;
        soma+=n;
    }
}
printf("%d valores positivos\n",p);
printf("%.1f\n",soma/p);
 
    return 0;
}