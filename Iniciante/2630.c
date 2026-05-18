#include <stdio.h>
#include<string.h>

int max(int a,int b,int c){
  int max;
  if(a>=b && a>=c) max=a;
  if(b>=a && b>=c) max=b;
  if(c>=a && c>=b) max=c;
  return max;
  }
int min(int a,int b,int c){
  int min;
  if(a<=b && a<=c) min=a;
  if(b<=a && b<=c) min=b;
  if(c<=a && c<=b) min=c;
  return min;
  }  
int main() {
 
int t,r,g,b,i=1,m,n,p;
char comando[5];
scanf("%d\n",&t);
while(t--){
    scanf("%s\n",comando);
    scanf("%d %d %d\n",&r,&g,&b);
    if(strcmp(comando,"min")==0){
      m=min(r,g,b);
      printf("Caso #%d: %d\n",i,m);
    }else if(strcmp(comando,"max")==0){
      n=max(r,g,b);
      printf("Caso #%d: %d\n",i,n);
    }else if(strcmp(comando,"mean")==0){
      int media=(r+g+b)/3;
       printf("Caso #%d: %d\n",i,media);
    }else{
      p=0.30*r+0.59*g+0.11*b;
    printf("Caso #%d: %d\n",i,p);
    }
    i++;
}
 
    return 0;
}