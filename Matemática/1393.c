#include<stdio.h>

int main(){

int numero, anterior1, anterior2,arr[41],n;
    
    anterior2 = 0, anterior1 = 1;
    for (int i = 2; i <= 41; ++i){
        numero = anterior2 + anterior1;
        arr[i-2]=numero;
        anterior2 = anterior1;
        anterior1 = numero;
    }
        scanf("%d\n",&n);
    while(n!=0){
      printf("%d\n",arr[n-1]);
          scanf("%d\n",&n);
    }
    
    return 0;

}