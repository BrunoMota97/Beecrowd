#include <stdio.h>

int main (){
	int q,i,j,l,c,a,b,mat[1002][1002],x,y;
	scanf("%d %d\n%d %d\n", &l, &c,&a,&b);
	for (i= 1; i<=l;i++)
		for (j= 1; j<=c; j++) scanf("%d", &mat[i][j]);
	q = 0;
	for (i= 1; i<=l; i++){
		for (j= 1; j<=c; j++){
		   if (mat[i][j] == 0) continue;
			q = mat[i+1][j] + mat[i-1][j] + mat[i][j+1] + mat[i][j-1];
			if (q == 1 && (i != a || j!= b)){
			   printf("%d %d\n",i,j);
			}
		}
	}
		return 0;
}
