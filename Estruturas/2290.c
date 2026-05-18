#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100100

int comp(long long *a, long long *b){
	if (*a == *b)	return 0;
	else if (*a > *b)	return 1;
	else	return -1;
}

int main (){
	short flag;
	unsigned n, i;
	long long vetor[MAXSIZE];

	while (scanf("%u", &n) != EOF){
	    if(n==0) break;
	    memset(vetor,n,sizeof(long long));
		for (i = 0; i < n; ++i) scanf("%lld", &vetor[i]);
		qsort(vetor, n, sizeof(long long), comp);
		flag = 0,i=0;
		while(i<n && flag<2){
			if (vetor[i] == vetor[i + 1] && i<n-1)	i += 2;
			else{
				printf("%lld", vetor[i]);
				if (flag == 1)	printf("\n");
				else	printf(" ");
				++i;
				flag++;
			}
		}
	}
return 0;
}
