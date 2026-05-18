#include <stdio.h>
#include <math.h>	

int main (){
	int n,a, c;
 	double b, d, resultado, fracao;
 	int inteiro;
 	scanf("%d\n", &n);
	while (n--){
		scanf("%d %lf %d %lf\n", &a, &b, &c, &d);
		resultado = (d-b)/(c-a);
		inteiro = resultado;
		fracao = trunc((resultado - inteiro)*100);
		printf("%d,%02.f\n", inteiro, fracao);
	}
}