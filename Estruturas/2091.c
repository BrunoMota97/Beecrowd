#include <stdio.h>

int main() {
    
    long long int n;
    long long int arr[100001];
      scanf("%lld",&n);
while(n>0){
  long long int res=0;
  for(int i=0;i<n;i++){
    scanf("%lld",&arr[i]);
    res ^=arr[i];
  }
  printf("%lld\n",res);
    scanf("%lld",&n);
}
    return 0;
}