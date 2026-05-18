#include <stdio.h>
int main(){
    int a,c;
    while(scanf("%d %d\n",&a,&c)){
      if(a==0 && c==0) break;
    int h[c];
    for(int i=0;i<c;i++){
      scanf("%d",&h[i]);
    }
    int v=0;
     for(int i=1;i<c;i++){
      if(h[i]-h[i-1]>0) v+=(h[i]-h[i-1]);
    }
    v+=(a-h[c-1]);
    printf("%d\n",v);
    }
}