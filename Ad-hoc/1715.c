#include <stdio.h>
 
int main() {
 
int n,m,x,c,d=0,i;
scanf("%d %d\n",&n,&m);
while(n--){
    for(i=0,c=0;i<m;i++){
        scanf("%d",&x);
        if(x>0) c++;
    }
    if(c==m) d++;
}
printf("%d\n",d);
 
    return 0;
}