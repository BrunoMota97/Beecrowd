#include <stdio.h>
int main(){
  int n,samuel,m,nathan,na=0,sam=0;
  scanf("%d %d\n",&n,&m);
  for(int i=0;i<n;i++){
    scanf("%d",&nathan);
    if(nathan==1) na++;
  }
 for(int i=0;i<n;i++){
   scanf("%d",&samuel);
   if(samuel==1) sam++;
 }
 
 if(na==m){
   printf("Tudo certo.\n");
 }else{
   if(sam==m) printf("Pegou de Samuel.\n");
   else printf("Pegou de um estranho.\n");
 }
}