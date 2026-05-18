#include <stdio.h>
int main() {
 int h,e,a,o,w,x,b,m;
 scanf("%d %d %d %d %d %d\n",&h,&e,&a,&o,&w,&x);
 b=h+e+a+x;
 m=o+w;
 if(b>=m) printf("Middle-earth is safe.\n");
 else printf("Sauron has returned.\n");
    return 0;
}