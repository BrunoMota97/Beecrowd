#include <stdio.h>
#include<math.h> 
int main() {
 int xoa,yoa,x1a,y1a,xob,yob,x2a,y2a,min,max;
scanf("%d %d %d %d\n%d %d %d %d\n",&xoa,&yoa,&x1a,&y1a,
&xob,&yob,&x2a,&y2a);
min=fmax(xoa,xob);
max=fmin(x1a,x2a);
if(min>max){
    printf("0\n");
    return 0;
}
min=fmax(yoa,yob);
max=fmin(y1a,y2a);
if(min>max){
   printf("0\n");
   return 0;
}
printf("1\n");
}