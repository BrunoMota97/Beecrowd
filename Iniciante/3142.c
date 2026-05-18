#include<stdio.h>
#include<string.h>

int main(){
  
char a[11];
while(scanf("%s",a)!=EOF){
  unsigned long long soma=0;
   for(int i=0,j=strlen(a)-1;i<strlen(a);j--,i++){
     soma+=(a[i]-'A'+1)*(unsigned long long)pow(26,j);
   }
   if(soma<=16384) printf("%llu\n",soma);
   else printf("Essa coluna nao existe Tobias!\n");
 } 
  
  return 0;
}