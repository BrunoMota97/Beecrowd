#include <stdio.h>
#include <string.h>
int getTamanho(char *palavra) {
    int indice = 0;
    while (palavra[indice++] != '\0');
    return indice;
}
int main() {
    char str1[11], str2[33];
    int tam, indice, quantidade, ultima, contador = 1;
    while (scanf("%s\n%s\n", str1,str2) != EOF) {
        tam = getTamanho(str1);
        indice = 0, quantidade = 0;
        char comparador[tam];
        while (indice < getTamanho(str2)) {
            strncpy(comparador, str2 + indice++, tam);
            comparador[tam-1] = '\0';
            if (!strcmp(comparador, str1)) {
                quantidade++;
                ultima = indice;
            }
        }
        printf("Caso #%d:\n", contador++);
        if (quantidade!=0) {
            printf("Qtd.Subsequencias: %d\nPos: %d\n\n", quantidade,ultima);
        }
        else printf("Nao existe subsequencia\n\n");
    }
    return 0;
}