#include <stdio.h>
int main() {
int k,n[7]={1,3,5,10,25,50,100};
scanf("%d\n",&k);
for(int i=0;i<7;i++){
if(k<=n[i]){
printf("Top %d\n",n[i]);
break;
}
}
return 0;
}