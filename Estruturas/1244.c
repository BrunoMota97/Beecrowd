#include <stdio.h>
#include <string.h>

int tam;
char novo[100][100];
int comp(char *a, char *b){
    return strlen(b) - strlen(a);
}

void insertionSort(){
    char aux[100];
    for (int i = 1; i < tam; ++i){
        int j = i, k = j - 1;
        while (k > -1 && (comp(novo[j], novo[k])) < 0){
            strcpy(aux, novo[j]);
            strcpy(novo[j], novo[k]);
            strcpy(novo[k], aux);
            --j, --k;
        }
    }
}
int main(){
  char frase[1000];
	char* tok;
  int n;
  scanf("%d\n",&n);
  while(n--){
    scanf("%[^\n]\n",frase);
  	  	tok = strtok(frase," ");
  	  	tam=0;
	  while (tok != NULL) {
			strcpy(novo[tam++],tok);
		tok = strtok(NULL," ");
	  }
	insertionSort();

	printf("%s",novo[0]);
	for(int i=1;i<tam;i++) printf(" %s",novo[i]);
	  printf("\n");
  }
	return 0;
}
