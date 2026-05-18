#include <stdio.h>
int main() {
int n;
scanf("%d\n",&n);
for(int i=0,a=1,b=2,c=3;i<n;i++){
    printf("%d %d %d PUM\n",a,b,c);
    c+=2,a=c++,b=c++;
}
    return 0;
}