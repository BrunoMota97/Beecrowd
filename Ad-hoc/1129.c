#include <stdio.h>
int main() {
int n,a[5],preta;
scanf("%d\n",&n);
while(n!=0){
for(int i=0;i<n;i++){
    int branca=0,preta=0;
    scanf("%d %d %d %d %d\n",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(int i=0;i<5;i++){
    if(a[i]>127) branca++;
    else  preta++;
    }
    if(preta==1){
      for(int i=0;i<5;i++){
        if(a[i]<=127){
           printf("%c\n",'A'+i);
           break;
    }}}else{
        if(branca==5 || preta>1) printf("*\n");
    }
}
scanf("%d\n",&n);
}
    return 0;
}