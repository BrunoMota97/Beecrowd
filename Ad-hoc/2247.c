#include <stdio.h>
 
int main() {
 
int n,k=0,j,z;
while(scanf("%d\n",&n)!=0){
    if(n==0) break;
    int saldo=0;
    printf("Teste %d\n",++k);
    for(int i=0;i<n;i++){
        scanf("%d %d\n",&j,&z);
        saldo+=(j-z);
        printf("%d\n",saldo);
    }
    printf("\n");
}
    return 0;
}
