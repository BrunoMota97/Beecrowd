#include <stdio.h>

void selectionSort(long long int v[1000000], int n){
 long long int i, j, aux, min;
 for(i = 0; i < n-1; i++) {
 min = i;
 for(j = i+1; j < n; j++) {
 if(v[j] < v[min]) {
 min = j;
 }
 }
 aux = v[i]; v[i] = v[min]; v[min] = aux; 
 }
 }
 
int main() {
 
int n,m;
scanf("%d %d\n",&n,&m);
long long int soma[n],v;
for(int i=0;i<n;i++){
    soma[i]=0;
    for(int j=0;j<m;j++){
        scanf("%lld",&v);
        soma[i]+=v;
    }
    soma[i]=(soma[i]*1000000)+i;
    scanf("\n");
}
selectionSort(soma, n);
printf("%lld\n%lld\n%lld\n",(soma[0]%1000000) +1,(soma[1]%1000000)+1,(soma[2]%100000)+1);
 
    return 0;
}