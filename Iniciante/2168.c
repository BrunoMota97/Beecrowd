#include <stdio.h>
 
int main() {
 
int n,ar[101][101];
scanf("%d\n",&n);
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        scanf("%d",&ar[i][j]);
    }
}
for(int i=0;i<n;i++){
  int conta;
    for(int j=0;j<n;j++){
        if(ar[i][j]==1) conta++;
        if(ar[i][j+1]==1) conta++;
        if(ar[i+1][j]==1) conta++;
        if(ar[i+1][j+1]==1) conta++;
        if(conta>=2) printf("S");
        else printf("U");
        conta=0;
    }
    printf("\n");
}
    return 0;
}