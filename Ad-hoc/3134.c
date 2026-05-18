#include <stdio.h>

int main(){
    int parteInt, parteDec, valor[5], soma = 0, flag = 0, i;
    for (i = 0; i <4; i++) {
        scanf("%d.%d\n", &parteInt, &parteDec);
        valor[i] = parteInt * 10 + parteDec;
        soma += valor[i];
    }
    for (i = 0; i < 4; i++){
        if (valor[i] == soma - valor[i]) flag = 1;
        for (int j = i+1; j < 4; j++)
           if (valor[0] + valor[j] == soma - valor[0] - valor[j]) flag = 1;
    }
    printf("%s\n",flag? "YES":"NO");
    return 0;
}