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
int n,q,a[30001],b[30001],temp;
while(scanf("%d %d\n",&n,&q)!=EOF){

for(int i=0;i<n;i++) scanf("%d\n",&a[i]);
for(int i=0;i<q;i++) scanf("%d\n",&b[i]);

insertionSort(a, n);
for(int i=0;i<q;i++) printf("%d\n",a[b[i]-1]);
}
    return 0;
}