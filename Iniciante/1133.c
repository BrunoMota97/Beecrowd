#include <stdio.h>
int main() {
int x,y,z;
scanf("%d\n%d\n",&x,&y);
if(x>y) z=x, x=y;
else z=y, y=x;
for(int i=y+1;i<z;i++){
    if(i%5==2 || i%5==3) printf("%d\n",i);
}
    return 0;
}