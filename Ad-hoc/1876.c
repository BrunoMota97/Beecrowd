#include <stdio.h>

int main(){
    char seq[101];
    while(scanf("%s\n",seq)!=EOF){
      int t=0,max=-1,c=0;
      for(int i=0;seq[i]!='\0';i++){
        if(seq[i]=='o') c++;
        else{
          if(t==0){
            if(c>max){
              max=c;
              t=1;
            }
            }else{
              if(c/2 >max) max=c/2;
            }
            c=0;
          }
        }
        if(c>max) max=c;
      printf("%d\n",max);
    }
}