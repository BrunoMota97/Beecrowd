#include <stdio.h>
#include<math.h>
int main() {
 
int p;
scanf("%d\n",&p);
int acumulador=0;
for(int i=1;i<=p;i++){
    acumulador+=(int)log10((double)i)+1;
}
printf("%d\n",acumulador);
 
    return 0;
}