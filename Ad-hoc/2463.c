#include<stdio.h>

void kadane(int array[], int n) {
  int current_sum = 0;
  int max_sum = -1e9;
  for (int i = 0; i < n; i++) {
    current_sum += array[i];
    if (max_sum < current_sum) {
      max_sum = current_sum;
    }
    if (current_sum < array[i]) {
      current_sum = array[i];
    }
  }
  printf("%d\n",max_sum);
}
int main() {
  int n;
  scanf("%d\n",&n);
  int array[n];
  for(int i=0;i<n;i++) scanf("%d",&array[i]);
  kadane(array, n);
}