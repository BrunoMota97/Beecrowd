#include <stdio.h>
 
int main() {
 
int n,x,y;
scanf("%d\n",&n);
while(n--){
scanf("%dx%d\n",&x,&y);

if(x!=y){
for(int i=5;i<=10;i++){
    printf("%d x %d = %d && %d x %d = %d\n",x,i,x*i,y,i,y*i);
}
}else{
 for(int i=5;i<=10;i++){
    printf("%d x %d = %d\n",x,i,x*i);
}   
}
}
    return 0;
}