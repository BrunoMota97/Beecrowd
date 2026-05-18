#include <stdio.h>
#include<string.h> 
int main() {
 
int n;
char nome[101];
scanf("%d\n",&n);
while(n--){
    scanf("%s\n",nome);
    for(int i=strlen(nome)-1;i>=0;i--){
        if(islower(nome[i])) printf("%c",nome[i]);
    }
    printf("\n");
        
    }
    return 0;
}