#include <stdio.h>
 
int main() {
 char dec[7]="decimal",oc[5]="octal",hex[11]="Hexadecimal";
int c=0,d=0,e=0;
for(int l=1,k=-1;l<=20;l++){
if(l==1 || l==3 || l==20){
  for(int i=1;i<=39;i++) printf("-");
}else if(l==2){
  for(int i=1;i<=39;i++){
 if(i==1 || i==13 || i==23 || i==39) printf("|");
 else if(i>=4 && i<=10) printf("%c",dec[c++]);
 else if(i>=16 && i<=20) printf("%c",oc[d++]);
 else if(i>=26 && i<=36) printf("%c",hex[e++]);
 else printf(" ");
 }
 }else{
   k++;
   for(int j=1;j<=39;j++){
   if(j==1 || j==13 || j==23 || j==39) printf("|");
    else if (( (j==8 || j==31)&& l<=13) || (j==18 && l<=11)) printf("%d",k);
    else if(j==7 && l>13) printf("%d",k);
    else if(j==17 && l>11) printf("%d",k+2);
    else if(j==30 && l>13) printf(" %c",l+'63');
    else if (j!=8 && j!=18 && j!=31) printf(" ");
 }
 }
  printf("\n");
 }
    return 0;
}