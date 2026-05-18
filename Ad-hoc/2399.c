#include <stdio.h>
 
int main() {
int n;
scanf("%d\n",&n);
int m[n];
for(int i=0;i<n;i++) scanf("%d\n",&m[i]);

for(int i=0,c;i<n;i++){
    c=0;
    if(m[i]==1) c++;
    if(m[i-1]==1 && i!=0) c++;
    if(m[i+1]==1 && i!=n-1) c++;
    printf("%d\n",c);
}
    return 0;
}