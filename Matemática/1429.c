#include <stdio.h>

int main() {
int n,fatorial[5]={1,2,6,24,120};
    scanf("%d\n",&n);
while(n!=0){
    int k=n;
    if(n==0) break;
    int c=0,soma=0,v;
    while(k>0){
        v=k%10;
        soma+=v*fatorial[c];
        k/=10;
        c++;
    }
    printf("%d\n",soma);
    scanf("%d\n",&n);
}
    return 0;
}