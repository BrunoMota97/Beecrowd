#include <stdio.h>
#include<stdlib.h>
int main() {
    int n,m, ar[1010], soma = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i <n; i++) scanf("%d", &ar[i]);
    for (int i = 0; i <n; i++) {
        int dist =m - ar[i];
        soma += abs(dist);
        ar[i + 1] += dist;
    }
    printf("%d\n", soma);
    return 0;
}