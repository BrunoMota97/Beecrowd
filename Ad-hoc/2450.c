#include <stdio.h>

int main(){
    int m, n, q, zeros = 0, valores, sim = 1, flag;

    scanf("%d %d\n", &m, &n);
    for (int i = 0; i < m; i++){
        q = 0, flag = 1;
        for (int j = 0; j < n; j++){
            scanf("%d", &valores);
            if (valores == 0 && flag==1) q++; //só vai contar os zeros consecutivos
            else flag = 0;
            }
        if (i != 0) 
            if (q > zeros || (q == zeros && q == n)) zeros = q;
            else zeros = 0, sim = 0; 
        else zeros = q; 
    }
    printf("%c\n",(sim && zeros>0)?'S':'N');
    
    return 0;
}