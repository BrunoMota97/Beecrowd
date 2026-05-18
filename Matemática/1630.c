#include <stdio.h>

int mdc(int num1, int num2) {
    int resto;
    do {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }while (resto != 0);
    return num1;
}
int main() {
 
int x,y;
while(scanf("%d %d\n",&x,&y)!=EOF){
    printf("%d\n",(2*x+2*y)/(mdc(x,y)));
}
    return 0;
}