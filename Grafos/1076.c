#include <stdio.h>
#include <stdbool.h>
#include<string.h>
#define MAX 105

int n,x;             
bool adj[MAX][MAX]; 
bool visited[MAX];  
int res=0;
void dfs(int v) {
  visited[v] = true;
  for (int i=0; i<x; i++)
    if (adj[v][i] && !visited[i])
      dfs(i),res++;
}

int main() {
   int  y, q, u, v, i;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &q);
        scanf("%d %d", &x, &y);
        memset(visited, 0, sizeof(visited));
        memset(adj, 0, sizeof(adj));
        for (i = 0; i < y; i++){
            scanf("%d %d", &u, &v);
            adj[u][v] = adj[v][u] = true;
        }
        res = 0;
        dfs(q);
        printf("%d\n", res<<1);
    }
  return 0;
}