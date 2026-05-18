#include <stdio.h>
int main() {
int q,n,m,x,y;
scanf("%d\n",&q);
while(q!=0){
scanf("%d %d\n",&n,&m);
for(int i=0;i<q;i++){
    scanf("%d %d",&x,&y);
    if(x==n || y==m) printf("divisa\n");
    else if(x>n){
        if(y>m) printf("NE\n");
        else printf("SE\n");
    }else{
        if(y<m) printf("SO\n");
        else printf("NO\n");
    }
}
scanf("%d\n",&q);
}
    return 0;
}