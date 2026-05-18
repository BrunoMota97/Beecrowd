#include <stdio.h>
int main() {

int n;
scanf("%d\n",&n);
while(n!=0){
  if(n==0) break;
  int fink=0;
  for(int i=1;i+fink<=n;i++){
      fink+=i;    
  }
int picapau=n-fink;
printf("%d %d\n",fink,picapau);
scanf("%d\n",&n);
}
return 0;
}