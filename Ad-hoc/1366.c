#include <stdio.h>
 
int main() {
 
int n;
    scanf("%d\n",&n);
while(n!=0){
    if(n==0) break;
    int c[n],v[n],pares=0;
    for(int i=0;i<n;i++){
        scanf("%d %d\n",&c[i],&v[i]);
        pares+=(v[i]/2);
    }
    printf("%d\n",pares/2);
  scanf("%d\n",&n);
}
 
    return 0;
}