#include <stdio.h>
int main() {

int a,b,c,x,y,z;
scanf("%d %d %d\n%d %d %d\n",&a,&b,&c,&x,&y,&z);
printf("%d\n",(z/c)*(y/b)*(x/a));
    return 0;
}