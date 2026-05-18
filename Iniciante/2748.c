#include <stdio.h>
 
int main() {
 char dec[7]="Roberto",oc[4]="5786",hex[6]="UNIFEI";
int c=0,d=0,e=0;
for(int l=1;l<=7;l++){
if(l==1 || l==7){
  for(int i=1;i<=39;i++) printf("-");
}else{
    for(int i=1;i<=39;i++){
      if(i==1 || i==39) printf("|");
      else{
        if(l==2){
          if(i>=10 && i<=16) printf("%c",dec[c++]);
          else printf(" ");
        }else if(l==4){
          if(i>=10 && i<=13) printf("%c",oc[d++]);
          else printf(" ");
        }else if(l==6){
          if(i>=10 && i<=15) printf("%c",hex[e++]);
          else printf(" ");
        }else{
          printf(" ");
        }
      }
    }
 }
  printf("\n");
 }
    return 0;
}