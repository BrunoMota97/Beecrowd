#include <stdio.h>
#include<string.h>
 
int main() {
 
char a[21],b[21];
scanf("%s\n%s\n",a,b);

if(strcmp(a,b)==0){
  if(strlen(a)<strlen(b)) printf("%s\n%s\n",a,b);
  else printf("%s\n%s\n",b,a);
}else if(strcmp(a,b)<0){
  printf("%s\n%s\n",a,b);
}else{
   printf("%s\n%s\n",b,a);
}
 
    return 0;
}