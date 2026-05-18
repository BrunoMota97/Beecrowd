#include <stdio.h>
#include<string.h>
int main() {
 
char palavra[30];
scanf("%[^\n]",palavra);

if(strcmp(palavra,"roraima")==0 || strcmp(palavra,"acre")==0 || strcmp(palavra,"amapa")==0
|| strcmp(palavra,"amazonas")==0 || strcmp(palavra,"para")==0 || strcmp(palavra,"rondonia")==0
|| strcmp(palavra,"tocantins")==0) printf("Regiao Norte\n");
else printf("Outra regiao\n");
 
    return 0;
}