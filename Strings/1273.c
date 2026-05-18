#include <stdio.h>
#include<string.h>
int main() {
 
int n,flag=1;
while(scanf("%d\n",&n)){
  if(n==0) break;
  int t=0,k=0,l=n,max;
  char palavra[n][51];
  if(flag) flag=0;
  else printf("\n");
while(n--){
    scanf("%s\n",palavra[k]);
     t=strlen(palavra[k]);
     if(t>max) max=t;
     k++;
}
for(int i=0;i<l;i++){
  int espacos=max-strlen(palavra[i]);
  for(int m=0;m<espacos;m++) printf(" ");
  printf("%s\n",palavra[i]);
}
max=0;

}
    return 0;
}