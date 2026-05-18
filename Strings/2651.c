#include <stdio.h>
#include<string.h> 
int main() {
 
char palavra[100001];
scanf("%s\n",palavra);
for(int i=0;palavra[i]!='\0';i++){
    palavra[i]=tolower(palavra[i]);
}

if(strstr(palavra,"zelda")) printf("Link Bolado\n");
else printf("Link Tranquilo\n");
    return 0;
}