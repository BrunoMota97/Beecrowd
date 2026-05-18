#include <stdio.h>
 
int main() {

int n,p;
while(scanf("%d\n",&n)!=-1){
  if(n==-1) break;
    int soma=0,c=0;
for(int i=0;i<n;i++){
    scanf("%d",&p);
    soma+=p;
    if(soma%100==0) c++;
}
printf("%d\n",c);
}
    return 0;
}