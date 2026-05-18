#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

bool potencia(int n){
  float lg=log10(n)/log10(2);
	
	if(lg>(int)lg) return false;
    else    return true;
	}
int main() {
 
int n,u,r,l,p1,p2,p3,maior;

while(scanf("%d",&n)!=0){
  if(n==0) break;
     maior=0,p1=0,p2=0,p3=0;
    for(int i=0;i<n;i++){
       scanf("%d %d %d\n",&u,&r,&l);
       if(potencia(u)){
           p1++;
           if(u==MAX(MAX(r,l),u)) p1++;
       }
       if(potencia(r)){
           p2++;
           if(r==MAX(MAX(r,l),u)) p2++;
       }
       if(potencia(l)){
           p3++;
           if(l==MAX(MAX(r,l),u)) p3++;
       }
    }
    if(p1>p2 && p1>p3) printf("Uilton\n");
       else{
         if(p2>p3 && p2>p1) printf("Rita\n");
         else{
           if(p3>p2 && p3>p1) printf("Ingred\n");
          else printf("URI\n");
         }
       } 
}
    return 0;
}