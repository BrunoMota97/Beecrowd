#include <stdio.h>
int main() {
int v,q,ar[11],i=0;
scanf("%d\n",&v);
while(v>0){
    q=v%16,v/=16,ar[i]=q,i++;
}
for(int k=i-1;k>=0;k--){
      if(ar[k]==10) printf("A");
      else if(ar[k]==11) printf("B");
      else if(ar[k]==12) printf("C");
      else if(ar[k]==13) printf("D");
      else if(ar[k]==14) printf("E");
      else if(ar[k]==15) printf("F");
      else printf("%d",ar[k]);
    }
    printf("\n");
    return 0;
}