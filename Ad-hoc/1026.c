#include <stdio.h>

int main(){
  unsigned int a,b;
while(scanf("%u %u\n",&a,&b)!=EOF){
    printf("%u\n",a^b);
}
}