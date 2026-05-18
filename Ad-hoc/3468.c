#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main() {
 
char palavra[20];
scanf("%s\n",palavra);

for(int i=0;palavra[i]!='\0';i++) palavra[i]=tolower(palavra[i]);
if(strcmp(palavra,"oposicao")==0 || strcmp(palavra,"contrariedade")==0) printf("mas\n");
else printf("mais\n");
 
    return 0;
}