#include <stdio.h>
 
int main() {
 
int n;
while(scanf("%d\n",&n)!=EOF){
    int h[n];
    if(n==0) break;
    for(int i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    scanf("\n");
    int c=0;
    for(int i=0;i<n;i++){
        if(i>0 && i<n-1){
        if((h[i]>h[i-1] && h[i]>h[i+1]) || (h[i]<h[i-1] && h[i]<h[i+1])) c++;
        }else if(i==0){
          if((h[i]>h[i+1] && h[i]>h[n-1]) || (h[i]<h[i+1] && h[i]<h[n-1])) c++;
        }else{
          if((h[i]>h[0] && h[i]>h[i-1]) || (h[i]<h[0] && h[i]<h[i-1])) c++;
        }
    }
    printf("%d\n",c);
}
    return 0;
}