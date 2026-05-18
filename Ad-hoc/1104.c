#include <string.h>
#include <stdio.h>

int main(){
    int alice[100001], beatriz[100001];
    int a, b, carta, sozinha_alice, sozinha_beatriz, ambas;
    while(scanf("%d %d\n", &a, &b)){
        if(a==0 && b==0) break;
        
        memset(alice, 0, sizeof(alice));
        memset(beatriz, 0, sizeof(beatriz));

        sozinha_alice = 0;
        for(int i = 0; i < a; i++){
            scanf("%d", &carta);
              
                if(alice[carta]==0){
                  alice[carta]=1;
                sozinha_alice++;
                }
        }

        ambas = 0,sozinha_beatriz = 0;
        for(int i = 0; i < b; ++i){
            scanf("%d", &carta);
     
              if(beatriz[carta]==0){
                beatriz[carta]=1;
                sozinha_beatriz++;
                if(alice[carta]==1) ambas++;
              }
        }
        sozinha_alice -= ambas, sozinha_beatriz -= ambas;
        if(sozinha_alice<sozinha_beatriz) printf("%d\n",sozinha_alice);
        else printf("%d\n",sozinha_beatriz);
    }

    return 0;
}