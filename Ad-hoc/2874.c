#include <stdio.h>
#include<string.h>
#include<math.h>
int main() {
 
int n,v;
while(scanf("%d\n",&n)!=EOF){
char s[8];
while(n--){
    scanf("%s\n",s);
    int soma=0;
    for(int k=strlen(s)-1,i=0;k>=0;k--,i++){
        if((s[k]-'0')==1){
        soma+=pow(2,i);
        }
    }
    printf("%c",soma);
}
printf("\n");
}
    return 0;
}