#include <stdio.h>
#include<string.h>
int main() {
 
int n,valor;
while(scanf("%d\n",&n)!=EOF){
int conjunto[n+1];
memset(conjunto,0,sizeof(conjunto));
for(int i=1;i<=n-1;i++){
  scanf("%d\n",&valor);
  conjunto[valor]=1;
  
}

for(int i=1;i<=n;i++){
  if(conjunto[i]==0){
    printf("%d\n",i);
    break;
  }
}
}
    return 0;
}