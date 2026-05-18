#include <stdio.h>
 
int fibonnaci(int n){
  int f1,f2,f;
    if(n==0 || n==1){
      return n;
    }else{
      f1=1,f2=0;
      for(int i=2;i<=n;i++){
        f=f1+f2;
        f2=f1;
        f1=f;
      }
      return f;
    }
}
int main() {

int long long i,n;
scanf("%llu\n",&n);
for(i=0;i<n-1;i++){
    printf("%d ",fibonnaci(i));
}
printf("%d\n",fibonnaci(i));
    return 0;
}