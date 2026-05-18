#include <stdio.h>
int main() {
int n,x,y,soma,c;
scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%d %d\n",&x,&y);
    soma=0,c=x;
    if(x>y){
      c=y;
      y=x;
    }
    for(int i=c+1;i<y;i++){
        if(i%2!=0) soma+=i;
    }
    printf("%d\n",soma);
}
    return 0;
}