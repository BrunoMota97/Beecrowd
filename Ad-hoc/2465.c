#include <stdio.h>
 
int mat[102][102],visitado[102][102];
void dfs(int x,int y){
    if(visitado[x][y]==1) return;
    visitado[x][y]=1;
    if(mat[x][y+1]>=mat[x][y]) dfs(x,y+1);
    if(mat[x][y-1]>=mat[x][y]) dfs(x,y-1);
    if(mat[x+1][y]>=mat[x][y]) dfs(x+1,y);
    if(mat[x-1][y]>=mat[x][y]) dfs(x-1,y);
} 
int main() {
int n,i,j;
scanf("%d\n%d %d\n",&n,&i,&j);
for(int l=1;l<=n;l++){
    for(int c=1;c<=n;c++) scanf("%d",&mat[l][c]);
}
dfs(i,j);
int res=0;
for(int l=1;l<=n;l++){
  for(int c=1;c<=n;c++) res+=visitado[l][c];
}
printf("%d\n",res);
 
    return 0;
}