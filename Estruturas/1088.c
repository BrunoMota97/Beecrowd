#include <stdio.h>
#include <stdlib.h>

int inversoes;
int comp(int a, int b){
    return a - b;
}
void merge(int *V, int inicio, int meio, int fim){
    int *aux = (int *)malloc((fim - inicio) * sizeof(int));
    int i = 0, i1 = inicio, i2 = meio, n1 = meio, n2 = fim;
    while (i1 < n1 && i2 < n2){
        if (comp(V[i1],V[i2]) < 0){
            aux[i++] = V[i1++];
        }else{
            aux[i++] = V[i2++];
            inversoes += (n1 - i1);
        }
    }
    while (i1 < n1) aux[i++] = V[i1++];
    while (i2 < n2) aux[i++] = V[i2++];
    for (int i = inicio; i < fim; ++i){
        V[i] = aux[i - inicio];
    }
    free(aux);
}
void mergeSort(int arr[], int left, int right) {
    if (right-left >1) {
        int mid = (left  + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid , right);
        merge(arr, left, mid, right);
    }
}
int main() {
   
   int n,*array;
   while(scanf("%d",&n)){
     if(!n) break;
      array = (int *)malloc(n * sizeof(int));
      for(int i=0;i<n;i++) scanf("%d",&array[i]);
      inversoes=0;
    mergeSort(array, 0, n);
    if(inversoes%2) printf("Marcelo\n");
    else printf("Carlos\n");
    free(array);
   }
    return 0;
}