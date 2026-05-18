#include <stdio.h>
int main(){
    int pa[100], p[100];
    int n, m, x, c1, c2, c3, c4;
    while(scanf("%d %d", &n, &m) != EOF){
        if(n==0 && m==0)  break;
      memset(p, 0, sizeof(p));
      memset(pa, 0, sizeof(pa));
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                scanf("%d", &x);
                pa[i] += x; p[j] += x;
            }
        }
        c1 = c2 = c3 = c4 = 1;
        for(int i = 0; i < n; ++i){
            if(pa[i] == m)   c1 = 0;
            if(pa[i] == 0)   c4 = 0;
        }
        for(int i = 0; i < m; ++i){
            if(p[i] == 0)   c2 = 0;
            if(p[i] == n)   c3 = 0;
        }
        printf("%d\n", c1 + c2 + c3 + c4);
    }
    return 0;
}