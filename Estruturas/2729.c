#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int tam;
char novo[10001][10001];
int comp(char *a, char *b){
    return strcmp(a,b);
}

void insertionSort(){
    char aux[10001];
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
  char frase[10001];
	char* tok;
  int n;
  scanf("%d\n",&n);
  while(n--){
    scanf("%[^\n]\n",frase);
  	  	tok = strtok(frase," ");
  	  	tam=0;
	  while (tok != NULL) {
	    int repetidos=0;
	    for(int i=0;i<tam;i++){
	      if(strcmp(novo[i],tok)==0){
	        repetidos=1;
	        break;
	      }
	    }
	      if(!repetidos){
	        strcpy(novo[tam],tok);
	        tam++;
	      }
				tok = strtok(NULL," ");
	  }
	insertionSort();
	printf("%s",novo[0]);
     for(int i=1;i<tam;i++)printf(" %s",novo[i]); 
  	  printf("\n");
  }
	return 0;
}