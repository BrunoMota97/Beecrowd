#include <stdio.h>
#include<string.h> 
#include<ctype.h>
int main() {
 
char letra,frase[1000];
int i=0;
scanf("%c\n%[^\n]\n",&letra,frase);
int flag=1,c=0,d=0;
for(int i=0;i<strlen(frase);i++){
   if(frase[i]=='\0'){
      c++;
      break;
   }if(frase[i]==letra && flag==1){
      d++; flag=0;
    }else if(frase[i]==' '){
      c++;
      flag=1;
    }
}
if(c==1) printf("%.1lf\n",d*100.0/c);
else printf("%.1lf\n",d*100.0/(c+1));
    return 0;
}