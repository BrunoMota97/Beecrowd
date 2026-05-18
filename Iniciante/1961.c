#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int p,n,flag=0;
    scanf("%d %d\n",&n,&p);
    int anterior,seguinte;
     scanf("%d",&anterior);
    for(int i=0;i<p;i++){
      scanf("%d",&seguinte);
      int dif=anterior-seguinte;
      if(abs(dif)>n){
        flag=1;
        break;
      };
      anterior=seguinte;
    }
    if(flag==1) printf("GAME OVER\n");
    else printf("YOU WIN\n");
}