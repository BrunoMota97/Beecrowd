#include <stdio.h>
#include<stdlib.h>
int comp(const void* a,const void* b) {
      return *(int*)a - *(int*)b;
}
 
int main() {
 
int n,a[4],b[4],r,e;
scanf("%d\n",&n);
while(n--){
  for(int i=0;i<3;i++) scanf("%d ",&a[i]);
  for(int i=0;i<3;i++) scanf("%d ",&b[i]);
  scanf("\n");
    qsort(a,3,sizeof(int),comp);
    qsort(b,3,sizeof(int),comp);
    if(b[2]>a[1] && b[1]>a[0]) r=1;
    else r=0;
    
    if(a[2]>b[1] && a[1]>b[0]) e=2;
    else e=0;
    printf("%d\n",r+e);
}
    return 0;
}