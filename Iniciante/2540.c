#include <stdio.h>
int main() {
 
int k,n,v,b;
double m;
while(scanf("%d",&n)!=EOF){
  int c=0;
for(int i=0;i<n;i++){
    scanf("%d",&v);
    if(v==1) c++;
}
 m = (2*n)/3.0;
if(c>=m) printf("impeachment\n");
 else printf("acusacao arquivada\n");
}
    return 0;
}