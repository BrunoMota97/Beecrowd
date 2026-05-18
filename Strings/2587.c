#include <stdio.h>
int main() {
int c,posicao[16];
char s1[16],s2[16],s3[16];
scanf("%d\n",&c);
while(c--){
    scanf("%s\n%s\n%s\n",s1,s2,s3);
    for(int i=0,k=0;s3[i]!='\0' || k<2;i++){
        if(s3[i]=='_'){
           posicao[k]=i;
           k++;
        }
    }
    if((s1[posicao[0]]==s2[posicao[1]] || s1[posicao[1]]==s2[posicao[0]])) printf("Y\n");
    else printf("N\n");
}
    return 0;
}