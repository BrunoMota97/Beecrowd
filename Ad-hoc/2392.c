#include <stdio.h>
 
int main() {
 
int n,m,p,d;
scanf("%d %d\n",&n,&m);
int v[10000];
for(int i=0;i<m;i++){
    scanf("%d %d\n",&p,&d);
    for(int l=p;l>0;l-=d) v[l]=1;
    for(int l=p;l<=n;l+=d) v[l]=1; 
}
for(int i=1;i<=n;i++) printf("%d\n",v[i]);
    return 0;
}