#include <stdio.h>

int main() {
 
int n;
scanf("%d\n",&n);
while(n!=0){
  if(n==0) break;
  int v[n];
  for(int i=1;i<=n;i++){
      scanf("%d\n",&v[i]);
  }
  int amb=1;
  for(int i=1;i<=n;i++){
    if(v[v[i]]!=i){
      amb=0;
      break;
  }
  }
  printf("%s\n",amb?"ambiguous":"not ambiguous");
  scanf("%d\n",&n);
}
    return 0;
}