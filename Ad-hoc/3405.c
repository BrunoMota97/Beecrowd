#include <stdio.h>
 
int main() {
 
int n,zeros=0;
scanf("%d\n",&n);
while(n>0){
    n/=5;
    zeros+=n;
}
printf("%d\n",zeros);
    return 0;
}