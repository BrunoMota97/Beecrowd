#include <stdio.h>
#include<stdlib.h>

int comp(const void* a,const void* b) {
      return *(int*)b - *(int*)a;
}
int main() {
    int arr[1001],n,t,novo[1001];
    scanf("%d\n",&n);
    while(n--){
      scanf("%d\n",&t);
    for (int i = 0; i < t; i++){
       scanf("%d",&arr[i]);
       novo[i]=arr[i];
    }
    qsort(novo, t, sizeof(int), comp);
    int c=0;
    for(int i=0;i<t;i++){
       if(arr[i]==novo[i]) c++;
    }
    printf("%d\n",c);
    }
    return 0;
}