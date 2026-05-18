#include<stdio.h>

int main(){
  
int n,k;
scanf("%d\n",&n);
while(n!=0){
  if(n==0) break;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      k=i+1;
     if((j+1)<k+1){
        k=j+1;
     }
     if((n-i)<k+1){
       k=n-i;
     }
     if((n-j)<k+1){
        k=n-j;
     }
     if(j) printf(" ");
     printf("%3d",k);
    }
    printf("\n");
  }
  printf("\n");
  scanf("%d\n",&n);
}
  return 0;
}