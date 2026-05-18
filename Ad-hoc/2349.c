#include <stdio.h>

int main() {
    int n, c, s;
    scanf("%d %d %d", &n, &c, &s);
    int ini = 1;
    int v[101]={0};
    v[ini]++;
    while (c--) {
        int ordem;
        scanf("%d", &ordem);
        if (ordem== 1) {
            ini++;
            if (ini == n + 1) ini = 1;
        } else {
            ini--;
            if (ini == 0) ini = n;
        }
        v[ini]++;
    }
    printf("%d\n", v[s]);
    return 0;
}