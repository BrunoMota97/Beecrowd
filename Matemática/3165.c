#include <stdio.h>
#include<stdbool.h>
#include<math.h>

int comp(const void* a,const void* b) {
      return *(int*)a - *(int*)b;
}

bool numeroprimo(int n){
      int flag=0;
    for (int i=2; i <=sqrt(n); i++) {
    if (n%i==0) {
       return false;
    }
    }
    return true;
} 
int main() {
 
int n;
scanf("%d\n",&n);

int primo[n],c=0;
for(int i=n;i>=2;i--){
    if(numeroprimo(i)){
        primo[c]=i;
         c++;
    }
}
qsort(primo, c, sizeof(int), comp);
for(int i=c;i>=0;i--){
  if(primo[i+1]-primo[i]==2){
    printf("%d %d\n",primo[i],primo[i+1]);
    break;
  }
}
    return 0;
}