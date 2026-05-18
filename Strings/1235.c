#include <stdio.h>
#include <string.h>

int main() {
    
    char linha[102];
    int n, i, metade;
    scanf("%d", &n);
    getchar();
    while (n--) {
        gets(linha);
        metade = strlen(linha) / 2;
        for (i = metade-1; i >= 0; i--) printf("%c", linha[i]);
        for (i = strlen(linha)-1; i >= metade; i--) printf("%c", linha[i]);
        printf("\n");
        
    }

    return 0;
}