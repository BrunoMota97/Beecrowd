#include <stdio.h>

int k;
char ans[250],string[250];

void build(int u, int n){
    if (u > n) return;
    build(2 * u, n);
    ans[u-1] = string[k++];
   build(2 * u + 1, n);
}
int main(){
    int n;
    while (scanf("%d%*c", &n), n){
        k = 0;
        scanf("%[^\n]", string);
        build(1, n);
        ans[k] = 0;
        printf("%s\n", ans);
    }
    return 0;
}