#include <stdio.h>
#include<stdlib.h>
int comp(const void* a,const void* b) {
      return *(int*)a - *(int*)b;
} 

int pesquisa_binaria(int nums[], int n, int target){
   int low = 0, high = n;

    while (low < high){
        int mid = (low + high) / 2;

        if (nums[mid] < target) low = mid + 1;
        else high = mid;
    }
    if(nums[low]==target) return low+1;
    else return -1;
}
 
int main() {
 
int n,q,qr,k=0;
while(scanf("%d %d\n",&n,&q)){
    if(n==0 && q==0) break;
    int v[n];
    for(int i=0;i<n;i++) scanf("%d\n",&v[i]);
    qsort(v, n, sizeof(int), comp);
    printf("CASE# %d:\n",++k);
    for(int j=0;j<q;j++){
        scanf("%d\n",&qr);
        if(pesquisa_binaria(v,n,qr)!=-1) printf("%d found at %d\n",qr,pesquisa_binaria(v,n,qr));
        else printf("%d not found\n",qr);
    }
}
    return 0;
}