#include <stdio.h>
#include<stdlib.h>
struct par{
	char comida[22];
	int dia;
};

int compareData(const void* a, const void* b){
    struct par *data1 = (struct par *)a;
    struct par *data2 = (struct par *)b;
    return data2->dia < data1->dia;
}
int main (){
	int n,i;
	while(scanf("%d\n", &n)!=EOF){
	struct par p[n + 1];
	for (i = 0; i  <  n; i++)
		scanf("%s %d\n", p[i].comida, &p[i].dia);

	qsort(p, n, sizeof(struct par), compareData);
    
    printf("%s",p[0].comida);
		for (i = 1; i  <  n; i++)
		printf(" %s", p[i].comida);
		printf("\n");
	}
}