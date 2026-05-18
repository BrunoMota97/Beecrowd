#include <stdio.h>
void selectionSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        double temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
} 
int main() {
 
int t,p,n;
scanf("%d\n",&t);
while(t--){
    scanf("%d %d\n",&p,&n);
    while(n--){
        double soma=0.0,max,ar[p];
    for(int i=0;i<p;i++){
        scanf("%lf",&ar[i]);
        soma+=ar[i];
    }
    double media=soma/p;
    selectionSort(ar,p);
    if(media<4.0) printf("%.2lf\n",media);
    else if(media>=4.0){
        int pos=p-1;
        max=ar[pos];
      if(media>=4.0 && media<7.0){
        while(max>=7.0) max=ar[pos--];
        printf("%.2lf\n",max>media? max:media);
      }else{
        printf("%.2lf\n",max>media? max:media);
      } 
    }
    }
}
    return 0;
}