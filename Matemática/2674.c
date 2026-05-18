#include <stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n){
     int flag=0;
     if(n==0 || n==1) return false;
    for (int i=2; i <=sqrt(n); i++) {
    if (n%i==0) {
       flag=1; break;
    }
    }
    if(flag) return false;
    return true;
}

int main(){
    int n,v;
    while(scanf("%d\n",&n)!=EOF){
 int c=1;
 if(isPrime(n)){
 while(n>0){
   v=n%10;
   n/=10;
   if(!isPrime(v)) c=0;
 }
 if(c==0) printf("Primo\n");
 else printf("Super\n");
 }else printf("Nada\n");
}
    return 0;
}