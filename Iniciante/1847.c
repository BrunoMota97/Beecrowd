#include <stdio.h>
int main() {
int a,b,c;
scanf("%d %d %d\n",&a,&b,&c);
int difab=b-a,difbc=c-b;

if(difab<0){
  if(difbc<0){
    if(difbc>difab) printf(":)\n");
    else printf(":(\n");
  }else{
    printf(":)\n");
  }
}else if(difab>0){
  if(difbc>0){
    if(difbc<difab) printf(":(\n");
    else printf(":)\n");
  }else{
    printf(":(\n");
  }
}else{
  if(difbc>0) printf(":)\n");
  else printf(":(\n");
}
    return 0;
}