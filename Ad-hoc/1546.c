#include <stdio.h>
int main() {
int n,k,q;
char ar[4][20]={"Rolien","Naej","Elehcim","Odranoel"};
scanf("%d",&n);
while(n--){
    scanf("%d",&k);
    for(int i=0;i<k;i++){
       scanf("%d",&q);
       printf("%s\n",ar[q-1]);
}
}
    return 0;
}