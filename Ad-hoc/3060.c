#include <stdio.h>
 
int main() {
 
int v,p;
scanf("%d\n%d\n",&v,&p);
int res=v%p, q=v/p;
for(int i=0;i<res;i++) printf("%d\n",q+1);
for(int i=0;i<p-res;i++) printf("%d\n",q);
    return 0;
}