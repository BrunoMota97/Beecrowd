#include <stdio.h>
#include<math.h>
int main(){
    int n,r;
    scanf("%d\n",&n);
    while(n--){
      scanf("%d\n",&r);
      int flag=0;
    for (int i=2; i <=sqrt(r); i++) {
    if (r%i==0) {
       flag=1; break;
    }
 }
 if (flag) printf("Not Prime\n");
 else printf("Prime\n");
    }
    return 0;
}