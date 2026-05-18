#include <stdio.h>

void selectionSort(int arr[], int N) {

    for (int i = 0; i < N - 1; i++) {

        int min_idx = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
int main() {
 
int a,d,flag;
scanf("%d %d\n",&a,&d);
while(a!=0 && d!=0){
  if(a==0 && d==0) break;
    int atacante[a+1],defensor[d];
    for(int i=0;i<a;i++) scanf("%d",&atacante[i]);
  for(int i=0;i<d;i++) scanf("%d",&defensor[i]);
  selectionSort(atacante,a);
  selectionSort(defensor,d);
  
     int flag=0;
  for(int i=0;i<a;i++){
      if(atacante[i]<defensor[0] || atacante[i]<defensor[1]){
        flag=1;
        break;
    }
  }
  printf("%c\n",flag? 'Y':'N');
  scanf("%d %d\n",&a,&d);
}

    return 0;
}