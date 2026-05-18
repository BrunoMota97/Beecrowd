#include <stdio.h>
 
int main() {
 
int n,m,x,falta,ar[301]={0},conta=0;

scanf("%d\n%d\n",&m,&n);
   for(int i=0;i<n;i++){
      scanf("%d\n",&x);
      for(int j=1;j<=m;j++){
        if(x==j) ar[j-1]++;
      }
   }
for(int i=1;i<=m;i++){
  if(ar[i-1]>0) conta++;
}
 printf("%d\n",m-conta);
    return 0;
}