#include <stdio.h>
 
int main() {
int n,m,c;
while(scanf("%d %d %d",&n,&m,&c)!=EOF){
  if(!n && !m && !c) break;
  printf("%u\n",((n-7)*(m-7)+c)/2); 
}
    return 0;
}