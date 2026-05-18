#include <stdio.h>
#include<stdlib.h>

typedef struct{
  char planet[51];
  int tempo;
}Planeta;
 
 
int compareTempo(const void* a, const void* b){
    return ((Planeta*)a)->tempo - ((Planeta*)b)->tempo;
}
int main() {
 
int n,anos,chegada;
  scanf("%d\n",&n);
while(n!=0){
  if(n==0) break;
 Planeta p[n];
for(int i=0;i<n;i++){
    scanf("%s %d %d\n",p[i].planet,&chegada,&anos);
    p[i].tempo=chegada-anos;
}
qsort(p,n,sizeof(Planeta),compareTempo);

  printf("%s\n",p[0].planet);
    scanf("%d\n",&n);
}
    return 0;
}