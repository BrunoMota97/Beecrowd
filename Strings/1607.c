#include <stdio.h>
#include <string.h>
#include<math.h>
int main() {
    
    char palavra1[10010],palavra2[10010];
    int n, i, metade;
    scanf("%d", &n);
    while (n--) {
        scanf("%s %s\n",palavra1,palavra2);
        int soma=0;
       for(int i=0;palavra1[i]!='\0';i++){
         if(palavra1[i]!=palavra2[i]){
           if((palavra1[i]-'0')<(palavra2[i]-'0'))soma+=abs((palavra2[i]-97)-(palavra1[i]-97));
           else soma+=26+((palavra2[i]-97)-(palavra1[i]-97));
       }
       }
       printf("%d\n",soma);
    }

    return 0;
}