#include <stdio.h>
#include<math.h>
int main(){
    int n,t,l,alice=0,bob=0,v,flag=0;
    scanf("%d %d %d\n",&n,&t,&l);
    for(int i=0;i<n-1;i++){
      scanf("%d\n",&v);
      int r=abs(t-v);
      if(flag==1){
         if(r<=l){
           t=v;
          bob+=r;
         } 
         flag=0;
      }else{
        if(r<=l){
          t=v;
          alice+=r;
        }
        flag=1;
      }
    }
     printf("%d %d\n",alice,bob);
}