#include <stdio.h>
#include<stdbool.h>

bool check(int v, int n){
 int p = 0, i;
 while(v){
  for(i = 0; i <= v; i++, p += v) 
   if(p == n) return true; 
  p -= v;
  v--;
 }
 return false;
}

int main(){
 int n, v, i,flag=0;
 while(n!=0 && v!=0){ 
    scanf("%d %d\n",&n,&v);
   if(n==0 && v==0) break;
    flag=0;
  
  for(i = 1; i <= v; i++) {
   if(check(i, n)){
    flag=1;
    break;
   }
  }
  printf("%s\n", flag? "possivel" : "impossivel");
 }
 return 0;
}