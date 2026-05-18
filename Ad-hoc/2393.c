#include <stdio.h>

int main() {
    int n,xi,xf,yi,yf,matriz[101][101]={0},j,res=0;
    scanf("%d\n",&n);
    while(n--){
      scanf("%d %d %d %d\n",&xi,&xf,&yi,&yf);
      for(int i=xi;i<xf;i++){
        for(j=yi;j<yf;j++) matriz[i][j]=1;
      }
    }
      for(int i=0;i<101;i++){
        for(int j=0;j<101;j++) res+=matriz[i][j];
      }
    printf("%d\n",res);
}
