#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool procuraEspecie(int*vista, int numero, int tam){

	for (int i = 0; i  <  tam; i++)
		if (vista[i] == numero) return true;
	return false;
}

int main (){

	int n,linha, coluna,c=0;

	while (scanf("%d\n", &n) != EOF){

		int floresta[n+ 1][n+ 1], vista[n* n];
		memset(floresta, 0, sizeof(floresta));
	
		for (linha = 1; linha  <  n+1; linha++)
			for (coluna = 1; coluna  <  n+1; coluna++)
				scanf("%d\n", &floresta[linha][coluna]);

		memset(vista, 0, sizeof(vista));
		for(int i=0;i<n*2;i++){
			scanf("%d %d\n", &linha, &coluna);

			if (!procuraEspecie(vista, floresta[linha][coluna], i)){
				c++;
				vista[i] = floresta[linha][coluna];
			}
		}
		printf("%d\n",c);
	}
	return 0;
}

