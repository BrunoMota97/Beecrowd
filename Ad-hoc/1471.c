#include <stdio.h>

int main() {
 
int n,r;
while(scanf("%d %d",&n,&r)!=EOF){
  int v[n],a,c=0;
  for(int i=0;i<n;i++) v[i]=i+1;
    for(int i=0;i<r;i++){
       scanf("%d",&a);
       v[a-1]=0;
    }
    for(int i=0;i<n;i++){
      if(v[i]!=0){
        c++;
      printf("%d ",v[i]);
    }
    }
    if(c==0) printf("*");
    printf("\n");
}
 
    return 0;
}