#include<stdio.h>

int main() {
	
	int n, m,a,b;
	while(1) {
		scanf("%d%d",&n,&m);
		if (n==0 && m==0)	break;
		char mat[n][m];
		for (int i = 0;i < n;i++)
			for (int j = 0;j < m;j++)
				scanf(" %c",&mat[i][j]);
		scanf("%d %d",&a,&b);
		for (int i = 0;i < n;i++) {
			for (int k = 0; k < (a/n); k++) {
				for(int j = 0;j < m;j++) {
					for(int z = 0; z <(b/m);z++)
						printf("%c",mat[i][j]);
				}
				printf("\n");
			}
		}
		printf("\n");
	}
    return 0;
}