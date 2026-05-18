#include <stdio.h>
int main(){
   int n;
   while(scanf("%d\n",&n)!=EOF){
   int ar[n][n];
   for(int i=0,c=0;i<n;i++,c++){
     for(int j=0;j<n;j++){
       if(i==n/2 && j==n/2) ar[i][j]=4;
       else if(i>=n/3 && j>=n/3 && i<n-(n/3) && j<n-(n/3)) ar[i][j]=1;
       else if(i==j) ar[i][j]=2;
       else if(j==n-1-i) ar[i][j]=3;
       else ar[i][j]=0;
     }
   }
   
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++) printf("%d",ar[i][j]);
     printf("\n");
   }
   printf("\n");
   }
}