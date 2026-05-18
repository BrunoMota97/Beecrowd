#include <stdio.h>

int main() {
    int a1,a2,a3, a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    a1 = 2*b + 4*c;
    a2 = 2*a + 2*c;
    a3 = 2*b + 4*a;
    if (a1 <= a2 && a1 <= a3) printf("%d\n", a1);
    else if (a2 <= a1 && a2 <= a3) printf("%d\n", a2);
    else printf("%d\n", a3);
    return 0;
}