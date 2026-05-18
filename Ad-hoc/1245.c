#include <stdio.h>
#include<math.h>
int main(){
 int n,m;
 char l;
 while(scanf("%d\n",&n)!=EOF){
   int sapatos[61][2]={0};
 for(int i=0;i<n;i++){
   scanf("%d %c\n",&m,&l);
   sapatos[m][l=='D']++;
 }
 int pares=0;
 for(int i=30;i<61;i++){
   pares+=fmin(sapatos[i][0],sapatos[i][1]);
 }
 printf("%d\n",pares);
 }
    return 0;
}