#include <stdio.h>
 
int main() {
 
int t,n,pontos;
char equipa[11];
 scanf("%d %d\n",&t,&n);
while(t!=0){
    if(t==0) break;
int soma=0;
for(int i=0;i<t;i++){
    scanf("%s %d\n",equipa,&pontos);
    soma+=pontos;
}
printf("%d\n",3*n-soma);
 scanf("%d %d\n",&t,&n);
}
    return 0;
}