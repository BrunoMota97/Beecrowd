#include <stdio.h>
 
int main() {
 
int q,e,s,c[1001];
while(scanf("%d %d\n",&q,&e)!=EOF){
for(int i=0;i<e;i++) scanf("%d",&s),c[s]=s;

for(int i=0;i<q;i++){
   scanf("%d\n",&s);
    if(s==c[s]) printf("0\n");
    else printf("1\n"),c[s]=s;
}
}
    return 0;
}