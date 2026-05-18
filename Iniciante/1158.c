#include <stdio.h>
 
int main() {
 
int n,x,y;
scanf("%d\n",&n);
while(n--){
    scanf("%d %d\n",&x,&y);
    int soma=0;
    for(int i=x,conta=0;conta<y;i++){
        if(i%2!=0){
            soma+=i;
            conta++;
        }
    }
    printf("%d\n",soma);
}
    return 0;
}