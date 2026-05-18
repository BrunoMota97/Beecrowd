#include <stdio.h>
 
int main() {
 
 int n,max,flag=0;
 max=-1;
 while(scanf("%d\n",&n)!=EOF){
     if(n>=max) max=n;
     else{
       printf("%d\n",max+1);
       flag=1;
       break;
     }
 }
 if(flag==0) printf("%d\n",max+1);
    return 0;
}