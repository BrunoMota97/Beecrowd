#include <stdio.h>
 
int main() {
 
int x,y;
scanf("%d %d\n",&x,&y);
    if((x>=0 && x<=432) && (y<=468 && y>=0))printf("dentro\n");
    else printf("fora\n");
    return 0;
}