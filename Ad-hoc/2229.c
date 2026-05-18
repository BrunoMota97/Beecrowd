#include <stdio.h>
#include<math.h>

int main() {
int n,k=0;
 while(n!=-1){
     scanf("%d\n",&n);
     if(n==-1) break;
     int d=pow(2,n)+1;
     int v=pow(d,2);
      printf("Teste %d\n%d\n\n",++k,v);
 }
    return 0;
}