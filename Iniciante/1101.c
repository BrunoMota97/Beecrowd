#include <stdio.h>
 
int main() {
 
int m,n,z,soma=0,i;
scanf("%d %d\n",&m,&n);
while(m>0 || n>0){
    if(m>n){
        z=m;
        m=n;
    }else{
        z=n;
        n=m;
    }
    for(i=m;i<=z;i++){
        soma+=i;
        printf("%d ",i);
    }
    printf("Sum=%d\n",soma);
    soma=0;
    scanf("%d %d\n",&m,&n);
    if(m<=0 || n<=0) break;
}
 
    return 0;
}