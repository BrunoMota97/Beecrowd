#include<stdio.h>

int main(){
  
int n,k,m;
scanf("%d\n",&n);
while(n!=0){
  if(n==0) break;
  int ar[n][n];
  for(int i=0;i<n;i++){
    m=i+1, k=2;
    for(int j=0;j<=i;j++,m--){
      ar[i][j]=m;
    }
    for(int j=i+1;j<n;j++,k++){
      ar[i][j]=k;
    }
    }
     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(j==0) printf("%3d",ar[i][j]);
        else printf(" %3d",ar[i][j]);
      }
    printf("\n");
  }
  printf("\n");
  scanf("%d\n",&n);
}
  return 0;
}