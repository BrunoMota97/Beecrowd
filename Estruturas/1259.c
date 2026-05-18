#include <stdio.h>
#include<stdlib.h>
int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int comp1(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main(){
    int n;
    scanf("%d\n",&n);
    int ar,pares[n],impares[n];
    int c=0,d=0;
    for(int i=0;i<n;i++){
      scanf("%d",&ar);
    
      if(ar%2==0) pares[c++]=ar;
      else impares[d++]=ar;
      
    }
    qsort(pares, c, sizeof(int), comp);
    qsort(impares, d, sizeof(int), comp1);
    for(int i=0;i<c;i++) printf("%d\n",pares[i]);
    for(int i=0;i<d;i++) printf("%d\n",impares[i]);
}