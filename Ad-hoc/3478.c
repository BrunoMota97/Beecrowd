#include <stdio.h>
#include <stdbool.h>
#define MAX 105      
 int n;              
 bool adj[MAX][MAX]; 
 bool visited[MAX];  
 void dfs(int v) {
 visited[v] = true;
 for (int i=1; i<=n; i++)
 if (adj[v][i] && !visited[i])
 dfs(i);
 }
 int main() {
 int edges, a, b,count=0;
 scanf("%d %d\n", &n,&edges);
 for (int i=0; i<edges; i++) {
 scanf("%d %d", &a, &b);
 adj[a][b] = adj[b][a] = true;
 }
 for(int i=1;i<=n;i++){
 if(!visited[i]){
 count++;
 dfs(i); 
 }
 }
 printf("%d\n",count);
 return 0;
 }