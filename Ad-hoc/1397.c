#include <stdio.h>
int main() {
int n,a,b,r1,r2;
scanf("%d\n",&n);
while(n!=0){
  int r1=0,r2=0;
for(int i=0;i<n;i++){
    scanf("%d %d\n",&a,&b);
    if(a!=b){
     if(a>b) r1++;
     else if(a<b) r2++;
    }
}
 printf("%d %d\n",r1,r2);
scanf("%d\n",&n);
}
    return 0;
}