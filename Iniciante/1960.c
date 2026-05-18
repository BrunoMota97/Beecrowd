#include <stdio.h>
#include <string.h>

int main(){

  int n;
  char resultado[101] = ""; 
  int romanos[13] = {1000, 900, 500, 400,100, 90, 50, 40, 10, 9, 5, 4, 1};
  char numeros_romanos[13][3] = {"M", "CM", "D", "CD","C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  scanf("%d\n", &n);
  if (n > 0) {
    for(int i = 0; i < 13; i++){ 
      while(n >= romanos[i]){  
        n-= romanos[i];  
        strcat(resultado, numeros_romanos[i]); 
      }  
    }
  }
    printf("%s\n", resultado);
  return 0;
}