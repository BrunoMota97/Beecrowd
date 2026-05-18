#include <stdio.h>
#include<string.h> 
#include<ctype.h>
int main() {
 
char frase[1000];
int i=0,c,d;
while(scanf("%[^\n]\n",frase)!='*'){
    if(frase[0]=='*') break;
  for(int i=0;i<strlen(frase);i++){
    frase[i]=tolower(frase[i]);
  }
c=0,d=0;
for(int i=0;i<strlen(frase);i++){
    if(frase[i]==' '){
      c++;
        if(frase[i+1]==frase[0]) d++;
    }
}
if(c==d) printf("Y\n");
else printf("N\n");
}
    return 0;
}