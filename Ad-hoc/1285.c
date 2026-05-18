#include <stdio.h>

int digitos(int n){
  int i=0,q,ar[10]={0};
   while(n>0){
    q=n%10,ar[q]+=1,n/=10;
  }

int repetidos=0;
for(int i=0;i<10;i++){
     if(ar[i]>1) repetidos++;
     }
   return repetidos;
}

int main() {
int n,m,v,q,ar[10],i=0;
while(scanf("%d %d\n",&n,&m)!=EOF){
  int c=0;
  for(int i=n;i<=m;i++){
        if(digitos(i)==0) c++;
    }
    printf("%d\n",c);
}
    return 0;
}