#include <stdio.h>

int main(){
  int n,i,j,k,top,se,sd, m[10][10];
 scanf("%d\n",&n);
  while (n--){
  for(i=0;i<=8;i+=2){
    for(j=0,k=0;j<=(i/2);j++,k+=2) scanf("%d",&m[i][k]);
  }
  for(i=0;i<8;i+=2){
    for(j=0,k=0;j<=(i/2);j++,k+=2){
      top=m[i][k];
      se=m[i+2][k];
      sd=m[i+2][k+2];
      m[i+2][k+1]=((top-se-sd)/2);
      m[i+1][k]=se+m[i+2][k+1];
      m[i+1][k+1]=m[i+2][k+1]+sd;
    }
  }
  for(i=0;i<9;i++){
    for(j=0;j<i;j++){
      printf("%d ",m[i][j]);
    }
    printf("%d\n",m[i][j]);
  }
}
return 0;
}