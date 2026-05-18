#include <stdio.h>
#include <math.h>

typedef long long unsigned llu;
int main (){
	llu etruscos;
	unsigned n, i;
	scanf("%u\n", &n);
	for (i = 0; i < n; ++i)
		scanf("%llu\n", &etruscos), printf("%llu\n", (llu)(-1 + sqrt(1 + 8 * etruscos)) / 2);
}