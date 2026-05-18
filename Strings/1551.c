#include <stdio.h>
#include<ctype.h>
int main() {
 
int n;
scanf("%d\n",&n);
while(n--){
  char frase[1001],v[26]={0};
    scanf("%[^\n]\n",frase);
    for(int i=0;frase[i]!='\0';i++){
      if(isalpha(frase[i])) v[frase[i]-97]++;
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(v[i]>=1) c++;
    }
    if(c==26) printf("frase completa\n");
    else if(c>=12) printf("frase quase completa\n");
    else printf("frase mal elaborada\n");

}
    return 0;
}