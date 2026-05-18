#include <stdio.h>
 
int main() {
 
int n,ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
scanf("%d\n",&n);
while(n--){
scanf("%d %d %d %d %d %d %d %d %d %d\n",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy,&rx,&ry);

if(ax<=rx && dx<=rx && bx>=rx && cx>=rx && ay<=ry && by<=ry && ry<=dy && ry<=cy) printf("1\n");
else printf("0\n");
} 
    return 0;
}