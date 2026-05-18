#include <stdio.h>
 
int main() {
 
int c,candidato,conta=0;
scanf("%d\n",&c);
for(int i=0;i<c;i++){
    scanf("%d",&candidato);
    if(candidato==1) conta++;
}
 printf("%d\n",conta);
    return 0;
}