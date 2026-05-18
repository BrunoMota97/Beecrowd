#include <stdio.h>
int main() {
int n,m;
while(scanf("%d\n",&n)!=EOF){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(n%2!=0){
        m=n/2;
        if(i==j && (i!=m && j!=m)) printf("1");
        else if(j==n-i-1) printf("2");
        else printf("3");
      }else{
        if(i==j) printf("1");
        else if(j==n-i-1) printf("2");
        else printf("3");
    }
    }
    printf("\n");
}
}
    return 0;
}