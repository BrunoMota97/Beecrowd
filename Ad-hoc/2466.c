#include <stdio.h>
 
int main() {
 
int n;
scanf("%d\n",&n);
int ar[n][n];
for(int i=0;i<n;i++) scanf("%d",&ar[0][i]);

for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
        if((ar[i-1][j]==-1 && ar[i-1][j+1]==-1) ||
        (ar[i-1][j]==1 && ar[i-1][j+1]==1)) ar[i][j]=1;
        else ar[i][j]=-1;
    }
}
if(ar[n-1][0]==1) printf("preta\n");
else printf("branca\n");
    return 0;
}