#include <stdio.h>
 
int main() {
 
int n,amin,amax,permitido,altura;
while(scanf("%d %d %d",&n,&amin,&amax)!=EOF){
  permitido=0;
    for(int i=0;i<n;i++){
    scanf("%d\n",&altura);
    if(altura>=amin && altura<=amax) permitido++;
   }
printf("%d\n",permitido);
}
    return 0;
}