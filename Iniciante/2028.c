#include <stdio.h>
 
int main() {
 
int n,soma,i,j,c=1;
while(scanf("%d\n",&n)!=EOF){
    soma=0;
    for(i=0;i<=n;i++){
      for(j=0;j<i;j++) soma++;
    }
    if(n==0){
      printf("Caso %d: %d numero\n",c++,soma+1);
      printf("0\n");
    }else{
       printf("Caso %d: %d numeros\n",c++,soma+1);
       printf("0 ");
    }
     for(i=0;i<=n;i++){
      for(j=0;j<i;j++){ 
         if(i == n && j == i-1) printf("%d\n",i);
          else printf("%d ",i);
        }
    }
    printf("\n");
}
    return 0;
}