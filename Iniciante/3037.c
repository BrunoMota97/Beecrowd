#include <stdio.h>
 
int main() {
 
int n,x,d,joao,maria;
scanf("%d\n",&n);

while(n--){
    joao=0;
    for(int i=0;i<3;i++){
        scanf("%d %d\n",&x,&d);
        joao+=x*d;
    }
    maria=0;
    for(int i=0;i<3;i++){
        scanf("%d %d\n",&x,&d);
        maria+=x*d;
    }
    if(joao>maria) printf("JOAO\n");
    else printf("MARIA\n");
}
    return 0;
}