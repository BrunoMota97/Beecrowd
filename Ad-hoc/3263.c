#include <stdio.h>
#include<string.h>
int main(){
    int n,i,c,flag=0;
    scanf("%d\n",&n);
    char ficheiro1[1001],ficheiro2[1001];
    scanf("%s\n%s\n",ficheiro1,ficheiro2);
    if(n%2==0){
      if(!strcmp(ficheiro1,ficheiro2)) flag=1;
    }else{
      for(i=0,c=0;ficheiro1[i]!='\0';i++){
        if(ficheiro1[i]!=ficheiro2[i]) c++;
      }
       if(c==strlen(ficheiro2)) flag=1;
      }
      if(flag) printf("Deletion succeeded\n");
      else printf("Deletion failed\n");
}