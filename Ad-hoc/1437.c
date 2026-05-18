#include <stdio.h>
#include<string.h>
int main() {
 
int n;
char res,c[1002];
while(scanf("%d\n",&n)!=0){
    if(n==0) break;
    scanf("%s\n",c);
    int posicao=90;
    for(int i=0;i<strlen(c);i++){
        if(c[i]=='D') posicao-=90;
        else posicao+=90;
    }
    int final=posicao%360;
    if(final==0) res='L';
    else if(final==90) res='N';
    else if(final==180) res='O';
    else res='S';
    printf("%c\n",res);
}
    return 0;
}