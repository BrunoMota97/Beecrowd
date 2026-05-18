#include<stdio.h>
#include<stdbool.h>

int MAX = 10001;
int graph[60][60];

bool vertice_valido(int u, int v, bool mst[]){
    if (u==v || (mst[u] && mst[v]) || (!mst[u] && !mst[v])) return false;
    return true;
}
int prim(int vertices){
    bool in_mst[60] = {false};
    in_mst[0] = true;
    int edge_count = 0, min_cost = 0, min_w, a, b;
    while (edge_count < vertices - 1) {
        min_w = MAX;
        a = b = -1;
        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                if (graph[i][j] < min_w) {
                    if (vertice_valido(i, j, in_mst)) {
                        min_w = graph[i][j];
                        a = i; b = j;
                    } } } }
        if (a != -1 && b != -1) {
            edge_count++;
            min_cost += min_w;
            in_mst[a] = in_mst[b] = true;
        }
    }
    return min_cost;
}
int main(){
    memset(graph, MAX, 60 * 60 * sizeof(int));
    int r, c, v, w, p;
    scanf("%d %d\n",&r,&c);
    for (int i = 0; i < c; i++) {
        scanf("%d %d %d\n",&v,&w,&p);
        v--,w--;
        graph[v][w] =graph[w][v]=p;
    }
    printf("%d\n",prim(r));
    return 0;
}