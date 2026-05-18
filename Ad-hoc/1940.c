#include <stdio.h>
 
int main() {
 
int j,r,n[501]={0},v;
scanf("%d %d\n",&j,&r);
int p=j*r;
for(int i=0;i<p;i++){
    scanf("%d",&v);
    n[i%j]+=v;
}
int max=-1,pos=0;
for(int i=0;i<j;i++){
  if(n[i]>=max) pos=i,max=n[i];
}
printf("%d\n",pos+1);
 
    return 0;
}