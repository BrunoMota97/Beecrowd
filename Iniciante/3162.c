#include <stdio.h>
#include<math.h>

int x[11][3];
int distancia(int a,int b){
  return sqrt(pow(x[a][0]-x[b][0],2) + pow(x[a][1]-x[b][1],2) + pow(x[a][2]-x[b][2],2));
}
int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
      scanf("%d %d %d\n",&x[i][0],&x[i][1],&x[i][2]);
    }
    for(int i=0;i<n;i++){
      int min=100000;
      for(int j=0;j<n;j++){
        if(i!=j)  min=fmin(min,distancia(i,j));
      }
      if(min<20) putchar('A');
      else if(min<50) putchar('M');
      else putchar('B');
      printf("\n");
    }
}