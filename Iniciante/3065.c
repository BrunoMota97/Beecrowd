#include <stdio.h>
 
int main() {
 
int n,res,l,i=1;
char op;
while(scanf("%d\n",&n)!=0){
  if(n==0) break;
scanf("%d",&l);
res=l;
for(int k=1;k<n;k++){
  scanf("%c %d",&op,&l);
  if(op=='+') res+=l;
  else res-=l;
}
printf("Teste %d\n%d\n\n",i,res);
i++;
}
    return 0;
}