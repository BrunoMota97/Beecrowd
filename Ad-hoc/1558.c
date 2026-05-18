#include <stdio.h>
#include<math.h>
int main() {
 
int n;

while(scanf("%d\n",&n)!=EOF){
    int flag=0,r=sqrt(n),soma[r],t=r;
    if(n>=0){
    while(r!=-1){
      soma[r]=r*r;
      r--;
    }
   for(int i=0;i<=t;i++)
       for(int j=0;j<=t;j++)
           if(soma[i]+soma[j]==n){
             flag=1;
             break;
           }
    }
   if(flag==1) printf("YES\n");
   else printf("NO\n");
 
}
    return 0;
}