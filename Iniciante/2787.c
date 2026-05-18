#include <stdio.h>
int main() {
int c,l;
scanf("%d\n%d\n",&l,&c);
    if((l%2==0 && c%2==0) || (l%2!=0 && c%2!=0)) printf("1\n");
    else  printf("0\n");
    return 0;
}