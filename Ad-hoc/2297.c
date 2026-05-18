#include <stdio.h>
 
int main() {
 
int r,a,b,k=0;
while(scanf("%d\n",&r)!=0){
if(r==0) break;
int soma1=0,soma2=0;
for(int i=0;i<r;i++){
    scanf("%d %d\n",&a,&b);
    soma1+=a;
    soma2+=b;
}
printf("Teste %d\n",++k);
if(soma2>soma1) printf("Beto\n");
else printf("Aldo\n");
printf("\n");
}
    return 0;
}