#include <stdio.h>
 
int main() {
 
int n,k,a,c=0;
scanf("%d %d\n",&n,&k);

for(int i=0;i<n;i++){
    scanf("%d",&a);
    if(a<=0) c++;
}

if(c<k) printf("NO\n");
else printf("YES\n");
    return 0;
}