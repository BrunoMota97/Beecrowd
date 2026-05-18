#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
    return *((int*)a) - *((int*)b);
}

int main(){
  
  int n,c;
  while(scanf("%d\n",&n)!=EOF){
  int v[n];
  for(int i=0;i<n;i++) scanf("%d\n",&v[i]);
  qsort(v, n, sizeof(int), comp);
  
  int dif=0;
 for(int i=0;i<n/2;i++){
    dif+=v[n-1-i]-v[i];
  }
  printf("%d\n",dif);
  }
  return 0;
}