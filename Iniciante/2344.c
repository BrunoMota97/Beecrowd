#include <stdio.h>
 
int main() {
    int nota;
scanf("%d\n",&nota);
if(nota>=86) printf("A\n");
else if(nota>=61) printf("B\n");
else if(nota>=36) printf("C\n");
else if(nota>=1) printf("D\n");
else printf("E\n");
 
    return 0;
}