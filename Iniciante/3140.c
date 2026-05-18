#include <stdio.h>
#include<string.h> 
int main() {
 int flag=0;
char texto[1000];
while(fgets(texto,sizeof(texto),stdin)!=NULL){
  if(strstr(texto,"</body>")!=NULL) break;
  if(flag==1) printf("%s",texto);
  if(strstr(texto,"<body>")!=NULL) flag=1; 
  }
    return 0;
}