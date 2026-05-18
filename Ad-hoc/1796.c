#include <stdio.h>
 
int main() {
 
int q;
scanf("%d\n",&q);
int v[q],c=0;
for(int i=0;i<q;i++) scanf("%d",&v[i]);

for(int i=0;i<q;i++){
    if(v[i]==0) c++;
}
if(((float)c/q)>0.5) printf("Y\n");
else printf("N\n");
    return 0;
}