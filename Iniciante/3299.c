#include <stdio.h>
 
int main() {
 
long long int n,q,ar[19],i,d,c;
scanf("%lld\n",&n);
d=n;
for(i=0;n>0;i++){
      q=n%10;
      n/=10;
      ar[i]=q;
}
c=0;
for(int k=i+1;k>=0;k--){
  if(ar[k]==1 && ar[k-1]==3){
    c++;
    if(c==1) break;
    else c=0;
      }
}
if(c==1) printf("%lld es de Mala Suerte\n",d);
else printf("%lld NO es de Mala Suerte\n",d);
  return 0;
}