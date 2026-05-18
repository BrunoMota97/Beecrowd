#include <stdio.h>
#include <math.h> 
int main() {
 
int n;
scanf("%d\n",&n);
int npedras=0,degraus=0,pilhas[n];
for(int i=0;i<n;i++){
    scanf("%d",&pilhas[i]);
    npedras+=pilhas[i];
    degraus+=i;
}
int base = npedras-degraus;

if(base % n!=0) printf("-1\n");
else{
    int linhas= base/n;
    int diftotal=0;
    for(int i=0;i<n;i++){
        diftotal+=abs((i+linhas)-pilhas[i]);
    }
    printf("%d\n",diftotal/2);
}
    return 0;
}