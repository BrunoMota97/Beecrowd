#include <stdio.h>
long long ma,mb,res;
int main() {
    int n, p, q, r, s, x, y, a, b;
    scanf("%d\n%d %d %d %d %d %d\n%d %d\n", &n, &p, &q, &r, &s, &x, &y, &a, &b);
    for (int i = 1; i <=n; i++){
        ma = (p*a + q*i) % x;
        mb = (r*i + s*b) % y;
        res += ma * mb;
    }
    printf("%lld\n", res);
    return 0;
}
