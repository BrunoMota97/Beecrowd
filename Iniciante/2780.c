#include <stdio.h>
 
int main() {
 
int d;
scanf("%d\n",&d);

if(d>1400) printf("3\n");
else if(d>800) printf("2\n");
else printf("1\n");
    return 0;
}