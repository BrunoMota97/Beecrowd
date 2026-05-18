#include <stdio.h>
 
int main() {
 
int n,m;
scanf("%d %d\n",&n,&m);
int p[n],i;
for(i=0;i<n;i++) scanf("%d",&p[i]);
int flag=0;
for(i=1;i<n;i++){
    if(p[i]-p[i-1]>m){
        flag=1;
        break;
    }
}
int k=i;
if((42195-p[k-1])<=m) printf("S\n");
else printf("N\n");
 
    return 0;
}