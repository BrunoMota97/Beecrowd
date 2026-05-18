#include <stdio.h>
int main() {

int n,max=0,d;
scanf("%d\n",&n);
int pilares[n];
for(int i=0;i<n;i++){
  scanf("%d\n",&pilares[i]);
}

for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
  d=pilares[i]+pilares[j]+(j-i);
  if(d>max) max=d;
}
}
printf("%d\n",max);
    return 0;
}