#include <stdio.h>
#include<string.h> 
int main() {
 
int n,k,c;
scanf("%d %d\n",&n,&k);
int arr[k];
memset(arr,0,sizeof(arr));
for(int i=0;i<n;i++){
    scanf("%d",&c);
    arr[c-1]++;
}
int max=100000001;
for(int i=0;i<k;i++){
     if(arr[i]<max) max=arr[i];
}
printf("%d\n",max);

    return 0;
}