#include <stdio.h>
#include<string.h> 
#include<stdlib.h>
#define MOD	1000000007
int compare(const void* a, const void* b) {
   return (*(int*)b - *(int*)a);
}
int main() {

int n,k;
while(scanf("%d %d\n",&n,&k)!=EOF){
  int arr[n];
  memset(arr,0,sizeof(arr));
  for(int i=0;i<n;i++) scanf("%d",&arr[i]);
  qsort(arr,n,sizeof(int),compare);
  long long soma=0;
  for(int i=0;i<k;i++){
    soma=(soma%MOD)+ arr[i];
  }
  printf("%lld\n",soma);
}

    return 0;
}