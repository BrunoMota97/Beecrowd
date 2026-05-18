#include <stdio.h>

int insertionSort(int arr[], int N) {
int conta=0;
    for (int i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            conta++;
        }

        arr[j + 1] = key;
    }
    return conta;
}

int main() {
    int arr[51],n,t;
    scanf("%d\n",&n);
    while(n--){
      scanf("%d\n",&t);
    for (int i = 0; i < t; i++) scanf("%d",&arr[i]);
    printf("Optimal train swapping takes %d swaps.\n",insertionSort(arr, t));
    }
    return 0;
}
