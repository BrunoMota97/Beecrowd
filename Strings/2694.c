#include <stdio.h>
int main(){
    int n,a,soma;
    char c[14];
    scanf("%d\n",&n);
    while(n--){
      scanf("%s\n",c);
      soma=(c[2]-'0')*10+(c[3]-'0');
      soma+=(c[5]-'0')*100+(c[6]-'0')*10+(c[7]-'0');
      soma+=(c[11]-'0')*10+(c[12]-'0');
      printf("%d\n",soma);
    }
}