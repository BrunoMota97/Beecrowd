#include <stdio.h>
#include<string.h>
int main() {
 
char n[102];
scanf("%s\n",n);
int c=0;
for(int i=0;i<strlen(n);i++){
  if(n[i]=='1' && n[i+1]=='3'){
    c++;
  }
   if(c==1) break;
    else c=0;
      }
if(c==1) printf("%s es de Mala Suerte\n",n);
else printf("%s NO es de Mala Suerte\n",n);
  return 0;
}