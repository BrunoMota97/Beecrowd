#include <stdio.h>
#include<string.h> 

int main() {
 
int n;
char frase[51];
scanf("%d\n",&n);
while(n--){
    gets(frase);
    char *termo=strtok(frase," ");
    while(termo!='\0'){
       printf("%c",termo[0]);
       termo=strtok(NULL," ");
    }
    printf("\n");
}
    return 0;
}