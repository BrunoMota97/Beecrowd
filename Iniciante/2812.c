#include <stdio.h>
#include <stdlib.h>

int comp(const void *a,const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  
int n,m;
scanf("%d\n",&n);

while(n--){
  scanf("%d\n",&m);
  int ar,c=0;
  int arr[1001];
  for(int i=0;i<m;i++){
    scanf("%d",&ar);
    if(ar%2!=0) arr[c]=ar,c++;
  }
  qsort(arr,c,sizeof(int),comp);
  int flag=1,k=0;
  if(c>=1){
  printf("%d",arr[c-1-k]);
  flag=0;
  }
 for(int i=1;i<c;i++){
   if(flag){
     printf(" %d",arr[c-1-k]);
     flag=0;
   }else{
   printf(" %d",arr[k]);
   k++;
   flag=1;
   }
 }
  printf("\n");
}

  return 0;
}