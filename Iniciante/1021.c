#include <stdio.h>

int main(){
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int valor, centimos,q;
    scanf("%d.%d", &valor, &centimos);
    valor = 100 * valor + centimos;
    printf("NOTAS:\n");
    for(int i = 0; i < 6; ++i){
        q=valor/notas[i];
        valor=valor-q*notas[i];
        printf("%d nota(s) de R$ %d.00\n",q,notas[i]/100);
    }

    printf("MOEDAS:\n");
    for(int i = 0; i < 6; ++i){
        q=valor/moedas[i];
        valor=valor-q*moedas[i];
        printf("%d moeda(s) de R$ %.2lf\n", q, moedas[i]/100.0);
    }

    return 0;
}