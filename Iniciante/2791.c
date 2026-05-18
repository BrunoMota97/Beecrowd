#include <stdio.h>
 
int main() {
 
int c[4];
for(int i=0;i<4;i++) scanf("%d",&c[i]);
for(int i=0;i<4;i++){
    if(c[i]==1) printf("%d\n",i+1);
}
    return 0;
}