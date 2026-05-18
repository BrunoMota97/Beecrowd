#include <stdio.h>
#include<string.h>

int main() {
 
int t,n,m,c;
scanf("%d\n",&t);

while(t--){
    scanf("%d %d\n",&n,&m);
    int arr[n];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<m;i++){
        scanf("%d",&c);
        arr[c-1]++;
    }
    int max=-1,pos;
    for(int i=0;i<n;i++){
      if(arr[i]>max){
        max=arr[i];
        pos=i+1;
      }
    }
    float percentagem= (float)max/m;
    if(percentagem>0.50) printf("%d\n",pos);
    else printf("-1\n");
}
    return 0;
}