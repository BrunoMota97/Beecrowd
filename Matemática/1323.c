#include <stdio.h>
 
int main() {
 
int n,quadrados;
while(n!=0){
    scanf("%d\n",&n);
    if(n==0)break;
    quadrados=0;
    for(int i=1;i<=n;i++){
        quadrados+=i*i;
    }
    printf("%d\n",quadrados);
}
    return 0;
}