#include <stdio.h>
int main() {
int x,y;
scanf("%d %d\n",&x,&y);
while(x!=y){
    if(x>y) printf("Decrescente\n");
    else printf("Crescente\n");
    scanf("%d %d\n",&x,&y);
}
    return 0;
}