#include <stdio.h>
 
int main() {
 
int n;
scanf("%d\n",&n);
char palavra[21];
for(int i=0;i<n;i++){
    scanf("%s",palavra);
    int t=strlen(palavra);
    if(i) printf(" ");
    if(t==3){
        if(palavra[0]=='O' && palavra[1]=='B') printf("OBI");
        else if(palavra[0]=='U' && palavra[1]=='R') printf("URI");
        else printf("%s",palavra);
    }else printf("%s",palavra);
}
printf("\n");

    return 0;
}