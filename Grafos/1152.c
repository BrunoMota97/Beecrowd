#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define N 200000
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

int main(){
    while(1){
            int m,n,custo_total = 0,desconto = 0;
            struct Estrada grafo[N]; 
            scanf("%d %d", &m, &n);
            if(m == 0 && n == 0) break;
            for (int i = 0; i < n; ++i) {  
                    scanf("%d %d %d",&grafo[i].x, &grafo[i].y, &grafo[i].distancia);
                    custo_total += grafo[i].distancia;
            }
            make_set(m);
            qsort(grafo, n, sizeof(grafo[0]), compare);
            for (int k = 0; k < n; ++k){
                int x = grafo[k].x, y = grafo[k].y;
                int i = find_set(x),j = find_set(y);
                if(i != j) union_set(i , j, k, &desconto, grafo);
            }
            printf("%d\n", custo_total-desconto);    
    }
    return 0;
}