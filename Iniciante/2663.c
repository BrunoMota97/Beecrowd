#include <stdio.h>
void insertionSort(int arr[], int n){
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main() {
int n,k,a[1001],i;
scanf("%d\n%d\n",&n,&k);

for(i=0;i<n;i++) scanf("%d\n",&a[i]);
insertionSort(a, n);
for(i=k-1;i<n && a[i]==a[k-1];i++);
printf("%d\n",i);

    return 0;
}