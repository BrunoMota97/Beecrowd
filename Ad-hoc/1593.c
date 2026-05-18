#include <stdio.h>
#include <string.h>

void binario(char *num) {
    int count = 0,carry = 0,len = strlen(num), digitos[1001],i,c;
    for ( i = 0; i < len; i++) {
        digitos[i] = num[i] - '0';
    }
    while (len > 0){
        c = 0, carry = 0;
       for ( i = 0; i < len; i++) {
            int curr = carry * 10 + digitos[i];
            digitos[c++] = curr / 2;
            carry = curr % 2;
        }
        if (carry == 1) count++;
        while (c > 0 && digitos[0] == 0) {
            for ( i = 0; i < c - 1; i++) {
                digitos[i] = digitos[i + 1];
            }
            c--;
        }
        len = c;
    }
    printf("%d\n",count);
}
int main() {
    int t;
    char num[1001]; 
    scanf("%d\n", &t);
    for ( int i = 0; i < t; i++) {
        scanf("%s", num);
        binario(num);
    }
    return 0;
}