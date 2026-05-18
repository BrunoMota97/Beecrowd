#include <stdio.h>
 
int main() {
int n,m,arr[101][101],c;
while(scanf("%d %d\n",&n,&m)!=EOF){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==1) c=9;
        else {
          c=0;
            if(arr[i][j+1]==1 && j!=m-1) c++;
            if(arr[i][j-1]==1 && j-1>=0) c++;
            if(arr[i-1][j]==1 && i-1>=0) c++;
            if(arr[i+1][j]==1 && i!=n-1) c++;
        }
        printf("%d",c);
      }
      printf("\n");
}
}
    return 0;
}