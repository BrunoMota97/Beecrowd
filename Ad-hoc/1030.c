#include <stdio.h>

long long int find(long long int n, long long int k){
	long long int sum = 0, i;
	for (i = 2; i <= n; i++)
		sum = (sum + k) % i;

	return sum + 1;
}

int main(){
    int nc, n, k,c=0;
    scanf("%d", &nc);
    while(nc--){
        scanf("%d %d\n", &n, &k);
        printf("Case %d: %d\n", ++c,find(n,k));
    }
    return 0;
}