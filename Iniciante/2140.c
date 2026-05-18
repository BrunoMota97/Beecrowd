#include <stdio.h>

int main(){
    int notas[] = {100, 50, 20, 10, 5, 2};
    int valor,n,m,q,c;
    scanf("%d %d\n",&n,&m);
    
    while(n!=0 && m!=0){
    valor=m-n,c=0;
    for(int i = 0; i < 6; ++i){
        q=valor/notas[i];
        valor=valor-q*notas[i];
        if(q!=0) c++;
    }
    if(c==2) printf("possible\n");
    else printf("impossible\n");
    scanf("%d %d\n",&n,&m);
    }
    return 0;
}