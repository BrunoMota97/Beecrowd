#include <stdio.h>
 
int main() {
 char dec[6]="x = 35";
int c=0,d=0,e=0;
for(int l=1;l<=7;l++){
if(l==1 || l==7){
  for(int i=1;i<=39;i++) printf("-");
}else{
    for(int i=1;i<=39;i++){
      if(i==1 || i==39) printf("|");
      else{
        if(l==2){
          if(i>=2 && i<=7) printf("%c",dec[c++]);
          else printf(" ");
        }else if(l==4){
          if(i>=17 && i<=22) printf("%c",dec[c++]);
          else printf(" ");
        }else if(l==6){
          if(i>=33 && i<=38) printf("%c",dec[c++]);
          else printf(" ");
        }else{
          printf(" ");
        }
      }
    }
    c=0;
 }
  printf("\n");
 }
    return 0;
}