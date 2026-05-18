#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
 char expressao[100];
while(scanf("%s\n",expressao)!=EOF){
    char* termo1=strtok(expressao,"+");
    char* termo2=strtok(NULL,"=");
    char* termo3=strtok(NULL,"=");
    
    if(isdigit(termo1[0]) && isdigit(termo2[0])) printf("%d\n",atoi(termo1) + atoi(termo2));
    else if(isdigit(termo1[0]) && isdigit(termo3[0])) printf("%d\n",atoi(termo3)-atoi(termo1));
    else printf("%d\n",atoi(termo3)-atoi(termo2));
}
    return 0;
}