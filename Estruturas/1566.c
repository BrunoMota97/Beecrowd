#include<stdio.h>

int main(){
  
int nc,n,h,v[230];

scanf("%d\n",&nc);
for(int i=0;i<nc;i++){
  scanf("%d\n",&n);
  for(int i=20;i<=230;i++) v[i]=0;
  for(int i=0;i<n;i++){
     scanf("%d",&h);
     v[h]++;
  }
  int aux=0;
  for(int i=20;i<=230;i++){
    if(v[i]>0){
    for(int j=0;j<v[i];j++){
      if(aux) printf(" ");
      else aux++;
      printf("%d",i);
    }
  }
}
 printf("\n");
 aux=0;
  
} 
  return 0;
}