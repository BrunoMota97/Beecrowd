#include <stdio.h>
#include<string.h> 
#include<stdlib.h>

int comp(const void *a, const void *b) {
    return strcmp(a,b);
}
int main() {
 
int t,i;
char n[1000][5];
while(scanf("%d\n",&t)!=EOF){
for(int i=0;i<t;i++) scanf("%s\n",n[i]);
  qsort(n,t,5,comp);
  for(int i=0;i<t;i++) printf("%s\n",n[i]);
}
    return 0;
}