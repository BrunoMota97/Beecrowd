#include <stdio.h>

struct Fracao{
  int numerador,denominador;
};

struct Fracao soma(struct Fracao f1,struct Fracao f2){

    struct Fracao resultado;
    resultado.numerador=(f1.numerador*f2.denominador + f2.numerador*f1.denominador);
    resultado.denominador=(f1.denominador*f2.denominador);
    
    return resultado;
}

struct Fracao subtracao(struct Fracao f1,struct Fracao f2){
    
    struct Fracao resultado;
    resultado.numerador=(f1.numerador*f2.denominador - f2.numerador*f1.denominador);
    resultado.denominador=(f1.denominador*f2.denominador);
    
    return resultado;
}

struct Fracao multiplicacao(struct Fracao f1,struct Fracao f2){
    
    struct Fracao resultado;
    resultado.numerador=(f1.numerador*f2.numerador);
    resultado.denominador=(f1.denominador*f2.denominador);
    
    return resultado;
}

struct Fracao divisao(struct Fracao f1,struct Fracao f2){
    
    struct Fracao resultado;
    resultado.numerador=(f1.numerador*f2.denominador);
    resultado.denominador=(f2.numerador*f1.denominador);
    
    return resultado;
}

int mdc(int num1, int num2) {
    int resto;
    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);
    return num1;
}
 
int main() {
 
int n,comum;
scanf("%d\n",&n);
struct Fracao f1, f2,res;
char operador;
while(n--){
    scanf("%d / %d %c %d / %d\n",&f1.numerador,&f1.denominador,&operador,&f2.numerador,&f2.denominador);
    switch(operador){
        case '+': 
        res=soma(f1,f2);
        break;
        case '-': 
        res=subtracao(f1,f2);
        break;
        case '*': 
        res=multiplicacao(f1,f2);
        break;
        case '/': 
        res=divisao(f1,f2);
        break;
    }
    printf("%d/%d = ", res.numerador, res.denominador);
    if(res.numerador<0){
      comum=mdc(-res.numerador,res.denominador);
    }else{
      comum=mdc(res.numerador,res.denominador);
    }
    printf("%d/%d\n", res.numerador/comum, res.denominador/comum);
}
    return 0;
}