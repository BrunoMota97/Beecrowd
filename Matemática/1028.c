#include <stdio.h>

int gcd(int a,int b) {
  int R;
  while ((a % b) > 0)  {
    R = a % b;
    a = b;
    b = R;
  }
  return b;
}

int main() {
 
int n,f1,f2;
scanf("%d\n",&n);
while(n--){
    scanf("%d %d\n",&f1,&f2);
    printf("%d\n",gcd(f1,f2));
}
    return 0;
}