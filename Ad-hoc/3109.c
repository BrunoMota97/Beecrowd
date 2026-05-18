#include <stdio.h>
#include<string.h>
int main(){
    int n,q,e,a,b,c=0,temp;
    scanf("%d\n%d\n",&n,&q);
    int mesas[n];
    for(int i=0;i<n;i++){
      mesas[i]=i+1;
    }
    while(q--){
      scanf("%d",&e);
      if(e==1){
      scanf("%d %d\n",&a,&b);
        temp=mesas[a-1];
      mesas[a-1]=mesas[b-1];
        mesas[b-1]=temp;
    }else{
      scanf("%d\n",&a);
      c=0;
      int atual = mesas[a-1];
      while(atual!=a){
        c++;
        atual=mesas[atual-1];
      }
      printf("%d\n",c);
    }
}
return 0;
}