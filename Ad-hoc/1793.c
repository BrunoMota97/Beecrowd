#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
 
 int n;
 while(scanf("%d\n",&n)!=0){
 int t[n];
 if(n==0) break;
 for(int i=0;i<n;i++) scanf("%d",&t[i]);
 int soma=10,dif;
 for(int i=1;i<n;i++){
     soma+=fmin(10,t[i]-t[i-1]);
 }
 printf("%d\n",soma);
 }
    return 0;
}