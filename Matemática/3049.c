#include <stdio.h>

int main() {
 
 int b,t;
 scanf("%d\n%d\n",&b,&t);
int felix=35*(b+t);
int total=70*160;
int marzia=total-felix;

if(felix>marzia) printf("1\n");
else if(felix<marzia) printf("2\n");
else printf("0\n");

    return 0;
}