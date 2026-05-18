#include <stdio.h>
#include<stdlib.h>
int comp(const void* a,const void* b) {
      return *(int*)a - *(int*)b;
}
int main() {
 
int n;
scanf("%d\n",&n);
int arr[n],mediana;
for(int i=0;i<n;i++) scanf("%d",&arr[i]);
qsort(arr,n,sizeof(int),comp);
int k=n-1;
if(n%2!=0) mediana=arr[k/2];
else mediana=(arr[k/2]+arr[k/2+1])/2;
printf("%d\n",mediana);
    return 0;
}