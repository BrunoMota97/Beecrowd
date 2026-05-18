#include<stdio.h>

 int main(){
 int v[100001], n, i;
 scanf("%d\n", &n);
 for(i = 0; i < n; i++) scanf("%d\n", &v[i]);
 
 int max=v[0],flag=0;
 for(i = 1; i < n; i++) {
   if(v[i]>max){
       flag=1;
       break;
   }
 }
 if(flag==0) printf("S\n");
 else printf("N\n");
 return 0;
 }