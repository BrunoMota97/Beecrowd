#include <stdio.h>

int p[25];
int comp(int a, int b){
    return p[a] - p[b];
}

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int insertionSort(int *V, int n){
    int trocas = 0;

    for (int i = 1; i < n; ++i){
        int j = i, k = j - 1;

        while (k > -1 && comp(V[j], V[k]) < 0)
        {
            swap(&V[j], &V[k]);
            ++trocas;
            --j, --k;
        }
    }

    return trocas;
}

int main(){
    int n, c[24], f[24];
    while (scanf("%d", &n) != EOF){
        for (int i = 0; i < n; i++)  scanf("%d", &c[i]);
        for(int i=0;i<n;i++){
          scanf("%d",&f[i]);
          p[f[i]]=i;
        }
        printf("%d\n",insertionSort(c,n));
    }
   return 0;
    }
        
        