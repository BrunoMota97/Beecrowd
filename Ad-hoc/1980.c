#include <stdio.h>
#include <string.h>

long long int fatorial(int num) {
  if (num <= 1) {
    return 1;
  } 
  else {
    return num * fatorial(num - 1);
  }
}

int main (){

	char s[20];
	while (1){
		scanf("%s", s);
		if (s[0] == '0') break;
		unsigned long long tamanho = strlen(s);
		printf("%llu\n", fatorial(tamanho));

	}
}
