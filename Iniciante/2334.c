#include <stdio.h>
 
int main() {
 
unsigned long long int p;
scanf("%llu\n",&p);
while(p!=-1){
    if(p==0) printf("0\n");
    else printf("%llu\n",p-1);
    scanf("%llu\n",&p);
}
    return 0;
}