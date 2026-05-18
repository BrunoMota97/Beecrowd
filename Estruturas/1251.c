#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
 
int main() {
 
char texto[1001];

   scanf("%s\n",texto);
 int cont[123]={0};
 for(int i=0;texto[i]!='\0';i++){
     if(texto[i]>='a' && texto[i]<='z') cont[texto[i]-'a'+97]++;
     if(texto[i]>='A' && texto[i]<='Z') cont[texto[i]-'A'+65]++;
     if(texto[i]>='0' && texto[i]<='9') cont[texto[i]-'0'+48]++;
 }
 
 
 qsort(cont, 48, sizeof(cont[0]), comp);
 for(int i=48;i<123;i++){
   if(cont[i]!=0) printf("%d %d\n",i,cont[i]);
 }
 printf("\n");
 
    return 0;
}