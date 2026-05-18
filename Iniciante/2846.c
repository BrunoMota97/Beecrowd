#include <stdio.h>
#include <math.h>
#include<stdbool.h>
bool isPerfectSquare(long long x){
    long long s = sqrt(x);
    return (s * s == x);
}

bool naoeFibo(long long n){
    return !(isPerfectSquare(5 * n * n + 4)
        || isPerfectSquare(5 * n * n - 4));
}

int main() {
    long long n, i = 1, r = 0;
    scanf("%lld\n",&n);
        while (n >= i) {
            if (naoeFibo(++r)) i++;
            }
      printf("%lld\n", r);

    return 0;
}