#include <stdio.h>
 
int main() {
int n;
char concorrente[30];
float d,s[7],max,min;
scanf("%d\n",&n);

while(n--){
    scanf("%s\n%f\n",concorrente,&d);
    float soma=0.0;
    for(int i=0;i<7;i++){
        scanf("%f\n",&s[i]);
        soma+=s[i];
    }
    max=-1.0,min=11;
    for(int i=0;i<7;i++){
        if(s[i]>max) max=s[i];
        if(s[i]<min) min=s[i];
    }
    float pontuacao=(soma-max-min)*d;
    printf("%s %.2f\n",concorrente,pontuacao);
}
    return 0;
}