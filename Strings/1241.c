#include <stdio.h>
#include<string.h> 
int main() {
 
int n;
char a[1001],b[1001];
while(scanf("%d\n",&n)!=EOF){
  while(n--){
scanf("%s\n%s\n",a,b);

if(strlen(a)<strlen(b)) printf("nao encaixa\n");
else{
     int encaixa=1;
     for(int i=0;i<strlen(b);i++){
    if(b[i]!=a[i+strlen(a)-strlen(b)]){
      encaixa=0;
      break;
    }
     }
     if(encaixa==0) printf("nao encaixa\n");
     else printf("encaixa\n");
     
    }
}
}
    return 0;
}