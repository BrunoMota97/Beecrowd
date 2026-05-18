#include <stdio.h>
#include<string.h>
int main() {
 
int e,b,c,i,k;
char invertida[10000];
scanf("%d\n",&c);
while(c--){
    scanf("%d %d\n",&e,&b);
    for(i=e;i<=b;i++) printf("%d",i);
    for(k=b;k>=e;k--){
      sprintf(invertida,"%d",k);
      for(int i=strlen(invertida)-1;i>=0;i--) printf("%c",invertida[i]);
}
    printf("\n");
}
    return 0;
}