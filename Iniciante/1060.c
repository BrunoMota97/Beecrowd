#include <stdio.h>
int main() {
int positivo=0;
double n;
for(int i=0;i<6;i++){
    scanf("%lf\n",&n);
    if(n>0) positivo++;
}
printf("%d valores positivos\n",positivo);
    return 0;
}