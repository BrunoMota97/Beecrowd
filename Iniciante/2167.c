#include <stdio.h>
 
int main() {
 
int n,r[100],flag=0;
scanf("%d\n",&n);

for(int i=0;i<n;i++){
    scanf("%d",&r[i]);
}
for(int i=0;i<n-1;i++){
 if(r[i]>r[i+1]){
    flag=1;
    printf("%d\n",i+2);
    break;
 }
 }
if(flag==0) printf("0\n");
 
    return 0;
}