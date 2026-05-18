#include <stdio.h>
#include<string.h>
int main() {
 
int d,i;
char n[101],nova[101]={0};
while(scanf("%d %s\n",&d,n)!=EOF){
  if(d==0 && strcmp(n,"0")==0) break;
  int c=0;
  memset(nova, '\0', sizeof(nova));
  for(i=0;n[i]!='\0';i++){
      if((n[i]-'0')!=d){
        nova[c++]=n[i];
      }
  }
  for(c=0;c<strlen(nova);c++){
    if(nova[c]!='0') break;
  }
  if(c==(strlen(nova))) printf("0\n");
  else{ 
     strcpy(nova,nova+c);
    printf("%s\n",nova);
  }
} 
    return 0;
}