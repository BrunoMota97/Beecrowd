#include <stdio.h>
int main(){
    char a[27],b[10001],v[]="abcdefghijklmnopqrstuvwxyz";
    scanf("%s\n%s\n",a,b);

    for(int i=0;b[i]!='\0';i++){
      for(int j=0;j<26;j++){
      if(b[i]==a[j]) printf("%c",v[j]);
    }
    }
   printf("\n");
    return 0;
}