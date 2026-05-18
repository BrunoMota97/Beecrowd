#include <stdio.h>
 
int main() {
int x,y,m;
while(scanf("%d %d %d\n",&x,&y,&m)!=EOF){
    int area=x*y,c=x,l=y;
    for(int i=0;i<m;i++){
        scanf("%d %d\n",&x,&y);
        if(((x<=c && y<=l) || (y<=c && x<=l))) printf("Sim\n");
        else printf("Nao\n");
    }
}
    return 0;
}