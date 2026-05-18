#include <stdio.h>
#include<string.h>
int main() {
 
int n,m,res;
char car[7];
scanf("%d %d\n",&n,&m);
res=n;
for(int i=0;i<m;i++){
    scanf("%s\n",car);
    if(strcmp(car,"fechou")==0){
      res--;
      res+=2;
    }else{
      res--;
    }
}
printf("%d\n",res);
    return 0;
}