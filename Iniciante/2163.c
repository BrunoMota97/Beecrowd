#include <stdio.h>
int main(){
   int n,m;
   scanf("%d %d\n",&n,&m);
   int t[n][m],x,y;
   for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
       scanf("%d",&t[i][j]);
     }
   }
   int flag=0;
   for(int i=1;i<n-1;i++){
     for(int j=1;j<m-1;j++){
       int c=0;
       if(t[i][j]==42){
         if(t[i-1][j]==7) c++;
         if(t[i+1][j]==7) c++;
         if(t[i][j+1]==7) c++;
         if(t[i][j-1]==7) c++;
         if(t[i+1][j+1]==7) c++;
         if(t[i+1][j-1]==7) c++;
         if(t[i-1][j-1]==7) c++;
         if(t[i-1][j+1]==7) c++;
         
         if(c==8){
         x=i+1,y=j+1;
         flag=1;
       }
       }
     }
   }
   if(flag==0) printf("0 0\n");
   else printf("%d %d\n",x,y);
}