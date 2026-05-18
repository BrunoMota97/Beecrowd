#include <stdio.h>
 
int main() {
int n,code,escolhido;
float max=-1, nota;
scanf("%d\n",&n);

for(int i=0;i<n;i++){
    scanf("%d %f\n",&code,&nota);
    if(nota>max){
        max=nota,escolhido=code;
}
}
if(max>=8.0) printf("%d\n",escolhido);
else printf("Minimum note not reached\n");
    return 0;
}