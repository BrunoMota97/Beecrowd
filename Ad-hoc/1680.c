#include <stdio.h>
#include<string.h>
int main(){
    char comando[201];
    while(scanf("%s\n",comando)!=EOF){
      printf("300 420 moveto\n310 420 lineto\n");
      int x=310,y=420,d=2;

     for(int i=0;i<strlen(comando);i++){
          if(comando[i]=='A'){
            if(d==0){
              x+=10;
              d=2;
            }else if(d==1){
              x-=10;
              d=3;
            }else if(d==2){
              y-=10;
              d=1;
            }else{
              y+=10;
              d=0;
            }
          }else{
            if(d==0){
              x-=10;
              d=3;
            }else if(d==1){
              x+=10;
              d=2;
            }else if(d==2){
              y+=10;
              d=0;
            }else{
              y-=10;
              d=1;
            }
          }
          printf("%d %d lineto\n",x,y);
      }
      printf("stroke\nshowpage\n");
    }
return 0;
}