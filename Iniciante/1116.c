#include <stdio.h>
 
int main() {
 
int n,x,y;
scanf("%d\n",&n);

for(int i=0;i<n;i++){
    scanf("%d %d\n",&x,&y);
    float div=(float) x/y;
    if(y==0) printf("divisao impossivel\n");
    else printf("%.1lf\n",div);
}
    return 0;
}