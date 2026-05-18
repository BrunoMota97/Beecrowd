#include <stdio.h>

void heapify(int arr[], int n, int i) {
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)  heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {

        int temp = arr[0]; 
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}
int main() {
    int n,k;
    while(1){
      scanf("%d %d\n",&n,&k);
      if(n==0 && k==0) break;
    int ar[n];
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);
    heapSort(ar, n);
    int c,d=0;
   for(int i=0;i<n;i++){
    c=1;
    for(int j=i+1;j<n;j++){
      if(ar[i]==ar[j]){
         c++;
         for(int k=j;k<n-1;k++){
           ar[k]=ar[k+1];
         }
         j--; n--;
      }
    }
    if(c>=k) d++;
  }
    printf("%d\n",d);
    }
    return 0;
}