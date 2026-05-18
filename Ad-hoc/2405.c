#include <stdio.h>
 
 int n,m,a,b;
 int mat[210][210];
void dfs(int x,int y){
  if(x<=0 || y<=0 || x>n || y>m) return;
  if(mat[x][y]==0){
    mat[x][y]=2;
  dfs(x-1,y);
  dfs(x+1,y);
  dfs(x,y-1);
  dfs(x,y+1);
  dfs(x-1,y-1);
  dfs(x-1,y+1);
  dfs(x+1,y+1);
  dfs(x+1,y-1);
  }
}
 
int main() {
 
int x,y,k,res=0;
scanf("%d %d %d %d %d\n",&n,&m,&x,&y,&k);

for(int i=0;i<k;i++){
    scanf("%d %d\n",&a,&b);
    mat[a][b]=1;
}
dfs(x,y);
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(mat[i][j]==2) res++;
    }
}
printf("%d\n",res);
    return 0;
}