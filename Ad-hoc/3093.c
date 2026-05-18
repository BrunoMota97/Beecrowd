#include <stdio.h>

int main() {
    int n;
    char mao[1002];
    scanf("%d\n",&n);
    while(n--){
      scanf("%s\n",mao);
      int a=0,q=0,k=0,j=0;
      for(int i=0;mao[i]!='\0';i++){
        if(mao[i]=='A') a++;
        else if(mao[i]=='Q') q++;
        else if(mao[i]=='K') k++;
        else if(mao[i]=='J') j++;
      }
      if(a>0 && q>0 && k>0 && j>0) printf("Aaah muleke\n");
      else printf("Ooo raca viu\n");
    }

}