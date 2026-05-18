#include <stdio.h>
 
int main() {
 
int n,d,f;
scanf("%d %d %d\n",&n,&d,&f);
int ar[n],c=0;
for(int i=0;i<n;i++) scanf("%d",&ar[i]);

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
       if(ar[i]+ar[j]>=d && ar[i]+ar[j]<=f) c++;
    }
} 
printf("%d\n",c);
    return 0;
}