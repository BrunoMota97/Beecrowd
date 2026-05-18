#include <stdio.h>
 
int main() {
 
int n,a,b;
char jogador1[11],jogador2[11],k=0;
while(scanf("%d\n",&n)!=0){
    if(n==0) break;
    scanf("%s\n%s\n",jogador1,jogador2);
    printf("Teste %d\n",++k);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if((a+b)%2==0){
            printf("%s\n",jogador1);
        }else{
          printf("%s\n",jogador2);
        }
    }
    printf("\n");
}

    return 0;
}