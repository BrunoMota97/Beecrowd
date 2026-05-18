#include <stdio.h>
int main() {
long long int v,q,ar[100],i=0;
scanf("%llu\n",&v);
while(v>0){
    q=v%10,v/=10,ar[i]=q,i++;
}
for(int k=0;k<i;k++) printf("%d",ar[k]);
    printf("\n");
    return 0;
}