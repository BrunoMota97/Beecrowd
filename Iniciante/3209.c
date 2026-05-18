#include <stdio.h>
int main() {
int n,s,p;
scanf("%d\n",&n);
while(n--){
    scanf("%d",&s);
    int soma=0;
    for(int i=0;i<s;i++){
        scanf("%d",&p);
        soma+=p;
    }
    printf("%d\n",soma-s+1);
}
    return 0;
}