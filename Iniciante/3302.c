#include <stdio.h>
 
int main() {
 
int n,e,i=1;
scanf("%d\n",&n);
while(n--){
    scanf("%d\n",&e);
    printf("resposta %d: %d\n",i,e);
    i++;
}
    return 0;
}