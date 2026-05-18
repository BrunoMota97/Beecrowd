#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
    return *((int*)a) - *((int*)b);
}

int main(){
  
  int t,n,c;
  scanf("%d\n",&t);
  while(t--){
  scanf("%d\n",&n);
  int v[n];
  for(int i=0;i<n;i++) scanf("%d\n",&v[i]);
  qsort(v, n, sizeof(int), comp);
  int d=0;
 for(int i=0;i<n;i++){
    c=1;
    for(int j=i+1;j<n;j++){
      if(v[i]==v[j]){
         c++;
         for(int k=j;k<n-1;k++){
           v[k]=v[k+1];
         }
         j--; n--;
      }
    }
     d++;
  }
  printf("%d\n",d);
}
return 0;
}