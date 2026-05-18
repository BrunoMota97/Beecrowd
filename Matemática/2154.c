#include <stdio.h>
 
int main() {
	int t,i,v1,v2;
	char str[256];
	while(scanf("%d",&t) != EOF) {
	int grau, prod;
		for(i = 0;i < t;i++) {
			scanf("%dx%d",&v1,&v2);
      if(i != t-1) scanf("%s",str);
			grau = v2*v1;
			prod = v2-1;
			printf("%dx",grau);
			if (prod!=1) printf("%d",prod);
			if(i != t-1) printf(" + ");
		}
		printf("\n");
	}
    return 0;
}