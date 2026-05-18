#include <stdio.h>

int main (){

	int  n, m;
	char cadeia[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	scanf("%d\n", &n);
	while (n--){
		scanf("%d\n", &m);
		char alfabeto[m + 1];
		scanf("%s", alfabeto);
		int c=0;
		for(int i=0;alfabeto[i]!='\0';i++){
		  if(alfabeto[i]!=cadeia[i]) c++;
		}
		if(c>2) printf("There aren't the chance.\n");
		else	printf("There are the chance.\n");
	}

}