#include <stdio.h>

int ar[1001];
int main() {
    int n,v;
    scanf("%d", &n);
    for (int i=1; i<n; i++) {
        scanf("%d", &v);
        ar[v] = 1;
    }
    for (int i = 1; i <= n; i++){
        if (!ar[i]) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}