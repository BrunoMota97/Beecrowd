#include <stdio.h>
#include<stdlib.h>
struct Medalhas{
	char pais[20];
	int ouro, prata, bronze;
};

int compareAlfabeto(const void* a, const void* b){
    return ((struct Medalhas*)b)->pais - ((struct Medalhas*)a)->pais;
}
int compareMedalhasOuro(const void* a, const void* b){
    return ((struct Medalhas*)b)->ouro - ((struct Medalhas*)a)->ouro;
}
int compareMedalhasPrata(const void* a, const void* b){
    return ((struct Medalhas*)b)->prata - ((struct Medalhas*)a)->prata;
}
int compareMedalhasBronze(const void* a, const void* b){
    return ((struct Medalhas*)b)->bronze - ((struct Medalhas*)a)->bronze;
}

int main (){
	int n,i;
	scanf("%d\n", &n);
	struct Medalhas paisMedalhas[n + 1];
	for (i = 0; i  <  n; i++)
		scanf("%s %d %d %d\n", paisMedalhas[i].pais, &paisMedalhas[i].ouro, &paisMedalhas[i].prata, &paisMedalhas[i].bronze);

	qsort(paisMedalhas, n, sizeof(struct Medalhas), compareAlfabeto);
	qsort(paisMedalhas, n, sizeof(struct Medalhas), compareMedalhasBronze);
	qsort(paisMedalhas, n, sizeof(struct Medalhas), compareMedalhasPrata);
	qsort(paisMedalhas, n, sizeof(struct Medalhas), compareMedalhasOuro);
		for (i = 0; i  <  n; i++)
		printf("%s %d %d %d\n", paisMedalhas[i].pais, paisMedalhas[i].ouro, paisMedalhas[i].prata, paisMedalhas[i].bronze);
}