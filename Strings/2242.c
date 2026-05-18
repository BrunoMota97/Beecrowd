#include <stdio.h>
#include<string.h> 
int main() {
 
 char palavra[51],nova[51];
 scanf("%s\n",palavra);
int c=0;
memset(nova, '\0', sizeof(nova));
for(int i=0;palavra[i]!='\0';i++){
    if(palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o'
    || palavra[i]=='u') nova[c++]=palavra[i];
}
int m=strlen(nova),flag=0;
for(int i=0;i<m;i++){
    if(nova[i]!=nova[m-1-i]) flag=1;
}
if(flag) printf("N\n");
else printf("S\n");

    return 0;
}