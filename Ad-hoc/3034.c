#include <stdio.h>
 
int primo(int n) {
  if (n == 0 || n == 1) return 0;

  if (n == 4) return 0;
  for (int x = 2; x <  n/ 2; x++) {

    if (n % x == 0) return 0;
  }
  return 1;
} 
 
int main() {
 
int n,e;
scanf("%d\n",&n);
while(n--){
    scanf("%d\n",&e);
    if((e+1)%7==0 && (e+1)%2!=0 && primo(e+3)) printf("Yes\n");
    else printf("No\n");
}
    return 0;
}