#include <stdio.h>
 
int main() {
 
int n,e;
scanf("%d\n",&n);
while(n--){
    scanf("%d\n",&e);
    if(e%2==0) printf("0\n");
    else printf("1\n");
}
    return 0;
}