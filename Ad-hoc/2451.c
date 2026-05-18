#include <stdio.h>
 
int main() {
 
int n;
scanf("%d\n",&n);
char ar[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%c",&ar[i][j]);
    }
    scanf("\n");
}
int max=0,c=0;
for(int i=0;i<n;i++){
    if(i%2==1){
     for(int j=n-1;j>=0;j--){
        if(ar[i][j]=='o') c++;
        else if(ar[i][j]=='A') c=0;
        if(c>max) max=c;
    }
    }else{
      for(int j=0;j<n;j++){
        if(ar[i][j]=='o') c++;
         else if(ar[i][j]=='A') c=0;
           if(c>max) max=c;
      }  
    }
}
printf("%d\n",max);
    return 0;
}