#include <stdio.h>
 
int main() {
 
double ar[101];
for(int i=0;i<100;i++){
    scanf("%lf\n",&ar[i]);
}
for(int i=0;i<100;i++){
    if(ar[i]<=10.0) printf("A[%d] = %.1lf\n",i,ar[i]);
}
    return 0;
}