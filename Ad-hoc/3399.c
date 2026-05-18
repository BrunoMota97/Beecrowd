#include <stdio.h>
 
int main() {
 
int a,b,c,n;
scanf("%d %d %d %d\n",&a,&b,&c,&n);
int razao=b-a;
int progressao=a+(n-1)*razao;
printf("%d\n",progressao);
    return 0;
}