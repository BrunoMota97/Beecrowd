#include<stdio.h>

void selectionSort(int v[200], int n){
 int i, j, aux, min;
 for(i = 0; i < n-1; i++) {
 min = i;
 for(j = i+1; j < n; j++) {
 if(v[j] > v[min]) {
 min = j;
 }
 }
 aux = v[i]; v[i] = v[min]; v[min] = aux; 
 }
 }

  int main(){
 int v[1001], n, i;
 while(scanf("%d", &n)!=0){
   if(n==0) break;
 for(i = 0; i < n; i++) {
 scanf("%d", &v[i]);
 v[i]= (v[i]*1000)+i;
 }
 selectionSort(v, n);

printf("%d\n",(v[1]%1000) +1);
}
 return 0;
 }
