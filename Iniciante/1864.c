#include <stdio.h>
 
int main() {
 
char mensagem[34]="LIFE IS NOT A PROBLEM TO BE SOLVED";
int n;
scanf("%d\n",&n);
for(int i=0;i<n;i++) printf("%c",mensagem[i]);
printf("\n");
    return 0;
}