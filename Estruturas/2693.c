#include <stdio.h>
#include<stdlib.h>
struct Aluno{
	char nome[20],sigla;
	int distancia;
};

int compareAlfabeto(const void* a, const void* b){
    return ((struct Aluno*)a)->nome - ((struct Aluno*)b)->nome;
}
int compareLocalizacao(const void* a, const void* b){
    return ((struct Aluno*)a)->sigla - ((struct Aluno*)b)->sigla;
}
int compareDistancia(const void* a, const void* b){
    return ((struct Aluno*)a)->distancia - ((struct Aluno*)b)->distancia;
}

int main (){
	int n,i;
	while(scanf("%d\n",&n)!=EOF){
	struct Aluno alunos[n + 1];
	for (i = 0; i  <  n; i++)
		scanf("%s %c %d\n", alunos[i].nome, &alunos[i].sigla, &alunos[i].distancia);

	qsort(alunos, n, sizeof(struct Aluno), compareAlfabeto);
	qsort(alunos, n, sizeof(struct Aluno), compareLocalizacao);
	qsort(alunos, n, sizeof(struct Aluno), compareDistancia);
		for (i = 0; i  <  n; i++) printf("%s\n", alunos[i].nome);
	}
}