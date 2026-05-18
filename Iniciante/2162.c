#include <stdio.h>

int main() {
 
    int paisagens, atual, anterior, p = 1, pico;

    scanf("%d",&paisagens);
    if (paisagens == 1) {
        scanf("%d",&atual);
        printf("%d\n", p);
    } else if (paisagens == 2) {
        scanf("%d %d",&anterior,&atual);
        printf("%d\n", !(atual == anterior));
    } else {
        scanf("%d %d",&anterior,&atual);
        paisagens -= 2;
        pico = atual > anterior;
        while(paisagens>0){
            anterior = atual;
            scanf("%d",&atual);
            paisagens--;
            if (p){
                if (pico) {
                    p = atual  <  anterior ;
                    pico = 0;
                } else {
                    p = atual > anterior;
                    pico = 1;
                }
            }
        }
        printf("%d\n",p);
    }
    return 0;
}