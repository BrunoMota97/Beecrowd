#include <stdio.h>
 
int main() {

int t,a,b,c;
scanf("%d\n",&t);
while(t--){
    scanf("%d %d %d\n",&a,&b,&c);
    int delta=b*b -4*a*c;
    double maximo= -(double)delta/(4*a);
    printf("%.2lf\n",maximo);
}
    return 0;
}