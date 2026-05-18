#include <stdio.h>
int main(){
    int n,d,i,j,c,flag;
    while(1){
        scanf("%d %d", &n, &d);
        if(n==0 && d==0) break;
        int x[d][n];
        for(i=0; i<d; i++){
            for(j=0; j<n; j++)
                scanf("%d", &x[i][j]);
        }
        for(i=0; i<n; i++){
            for(j=0,c=0; j<d; j++)
                if(x[j][i]==1) c++;
            if(c==d){
                flag=1;
                break;
            }
            else c=0;
        }
        if(flag) printf("yes\n");
        else printf("no\n");
        flag=0;
    }
    return 0;
}