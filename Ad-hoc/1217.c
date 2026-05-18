#include <stdio.h>
 
int main() {
 
int n,d=0,k=1,soma1=0;
float preco, soma=0.0;
char frutas[10000];
scanf("%d\n",&n);
while(n--){
    scanf("%f\n",&preco);
    scanf("%[^\n]",frutas);
    soma+=preco;
    int c=1;
    for(int i=0;frutas[i]!='\0';i++){
        if(frutas[i]==' ') c++;
    }
    soma1+=c;
    d++;
    printf("day %d: %d kg\n",k++,c);
}
printf("%.2lf kg by day\nR$ %.2lf by day\n",(double)soma1/d,soma/d);
    return 0;
}