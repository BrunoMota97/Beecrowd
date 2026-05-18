#include <stdio.h>

int main() {
 
int m,n,soma,q,ar[11],i;
char letra[11];
scanf("%d %d\n",&m,&n);
while(m!=0 && n!=0){
    soma=m+n,i=0;
    while(soma>0){
      q=soma%10;
      soma/=10;
      ar[i]=q;
      i++;
    }
    for(int k=i-1;k>=0;k--){
      letra[k]=ar[k]+'0';
    } 
    for(int k=i-1;k>=0;k--){
      if(letra[k]!='0') printf("%c",letra[k]);
    } 
    printf("\n");
    scanf("%d %d\n",&m,&n);
}
    return 0;
}