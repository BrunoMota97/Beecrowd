#include <stdio.h>
int main() {

int n,a,b;
scanf("%d\n",&n);
while(n--){
  int flag=1;
    scanf("%d %d\n",&a,&b);
      if(b>a) printf("nao encaixa\n");
      else{
        while(b>0){
          if(a%10==b%10){
            a/=10,b/=10;
          }else{
            flag=0;
            break;
          }
        }
        if(flag==0) printf("nao encaixa\n");
        else printf("encaixa\n");
      }
}
    return 0;
}