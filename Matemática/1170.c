#include <stdio.h>
int main(){
    int n;
    double x;
    scanf("%d\n",&n);
    while(n--){
      scanf("%lf\n",&x);
      int c=0;
      while(x>1.0){
        x/=2.0;
        c++;
      }
      printf("%d dias\n",c);
    }
}