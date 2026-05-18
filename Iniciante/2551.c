#include <stdio.h>
 
int main() {
 
int n,t,d,i;
double m;
while(scanf("%d\n",&n)!=EOF){
  double max=-1.0;
for(i=1;i<=n;i++){
    scanf("%d %d\n",&t,&d);
    m=(double)d/t;
    if(m>max){
      printf("%d\n",i);
      max=m;
}
}
}
    return 0;
}