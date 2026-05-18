#include <stdio.h>
#include<string.h>

int main(){
  char h[100000],codigo[300000];
  int i = 1;
  while(scanf("%s\n",h) && h[0]!='0') {
    if(i!=1) printf("\n");
    if(strcmp(h,"0")==0) break;
    printf("Instancia %d\n",i);
    scanf("%s\n",codigo);
    if(strstr(codigo,h)) printf("verdadeira\n");
    else printf("falsa\n");
    i++;
  }
    
  return 0;
}