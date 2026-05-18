#include <stdio.h>
 
int main() {
 
int x1,y1,x2,y2,n,x,y,i=1;
scanf("%d %d %d %d\n",&x1,&y1,&x2,&y2);
while(x1!=0 && y1!=0 && x2!=0 && y2!=0){
scanf("%d\n",&n);
int c=0;
while(n--){
    scanf("%d %d\n",&x,&y);
    if((x>=x1 && x<=x2) && (y<=y1 && y>=y2)) c++;
}
printf("Teste %d\n%d\n",i,c);
i++;
scanf("%d %d %d %d\n",&x1,&y1,&x2,&y2);
}
    return 0;
}