#include <stdio.h>
 
int main() {
 
int n,v1;
scanf("%d\n",&n);
int soma=0;
for(int i=0;i<n;i++){
    scanf("%d\n",&v1);
    soma+=v1;
}
printf("%d\n",soma-n);
    return 0;
}