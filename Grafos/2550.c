#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define N 509545
int vertices[N];

struct Estrada{
    int x, y, distancia;
};

int compare(const void *a, const void *b){
    return (*(struct Estrada *)a).distancia - (*(struct Estrada *)b).distancia;
}
void make_set(int n){
    for (int i = 0; i <= n; ++i){
        vertices[i] = i;
    }
}
int find_set(int x){
    if (vertices[x] != x){
        vertices[x] = find_set(vertices[x]);
    }
    return vertices[x];
}
int union_set(int i, int j, int p, int *desconto, struct Estrada *grafo){
    (*desconto) += grafo[p].distancia;
    if (i > j){
        vertices[i] = j;
    } else{
        vertices[j] = i;
    }
    return 0;
}
int m;
bool adj[10010][10010]; 
bool visited[100010];  

 void dfs(int v) {
 visited[v] = true;
 for (int i=1; i<=m; i++)
 if (adj[v][i] && !visited[i]) dfs(i);
 }

int main(){
            int n;
            while(scanf("%d %d\n", &m, &n)!=EOF){
              int custo_total = 0,desconto = 0,comp=0;
            struct Estrada grafo[N]; 
            memset(adj, 0, sizeof(adj));
           
            for (int i = 0; i < n; ++i) {  
                    scanf("%d %d %d\n",&grafo[i].x, &grafo[i].y, &grafo[i].distancia);
                    custo_total += grafo[i].distancia;
                    adj[grafo[i].x][grafo[i].y]=grafo[i].distancia;
            }
              memset(visited, 0, sizeof(visited));
             for(int i=1;i<=m;i++){
               if(!visited[i]){
                 comp++,dfs(i);
               }
             }
             if(comp>1){
               printf("impossivel\n");
               continue;
             }
            make_set(m);
            qsort(grafo, n, sizeof(grafo[0]), compare);
            int i,j;
            for (int k = 0; k < n; ++k){
                int x = grafo[k].x, y = grafo[k].y;
                 i = find_set(x),j = find_set(y);
                if(i != j) union_set(i , j, k, &desconto, grafo);
            }
             printf("%d\n", desconto); 
            }
    return 0;
}