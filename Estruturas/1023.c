#include <stdio.h>
#include <string.h>
#include <math.h>

int arr[300];

int main(){
 int i, j, n, c = 0, a, b, ta, tp, fp,flag=0;
 double ip;
 while(scanf("%d", &n) && n){
  if(flag) printf("\n");
     flag=1;
  ta = tp = 0;
  memset(arr, 0, sizeof arr);
  for (i = 0; i < n; ++i){
   scanf("%d %d", &a, &b);
   ta += b;
   tp += a;
   arr[b/a] += a;
  }
  printf("Cidade# %d:\n", ++c);
  for(i = 0, j = 0; i  <  300; i++){
            if(arr[i] > 0){
                if(j != 0)
                    printf(" ");
                printf("%d-%d", arr[i], i);
                j++;   
            }  
        }
  fp = (int) (modf ((double)ta/tp, &ip) * 100);

  if(fp < 10) printf("\nConsumo medio: %d.0%d m3.\n", (int)ip, (int)fp);
  else printf("\nConsumo medio: %d.%d m3.\n", (int)ip, (int)fp);
 }
 return 0;
}