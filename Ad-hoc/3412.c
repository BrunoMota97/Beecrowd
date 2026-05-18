#include <stdio.h>
#include<stdlib.h> 
#include<string.h>
int main() {
 
int n;
scanf("%d\n",&n);
double nota;
while(n--){
    char *nome=malloc(30*sizeof(char));
    char numeros[100];
    char *nov[100];
    scanf("%[^\n]\n",nome);
    double soma=0.0;
    printf("%s: ",nome);
    scanf("%[^\n]\n",numeros);
    int c=0;
       char* token = strtok(numeros, " ");
    while (token != NULL) {
        nov[c++]=token;
        token = strtok(NULL," ");
    }
    double val,min=11.0,media;
    for(int i=0;i<c;i++){
      sscanf(nov[i], "%lf", &val);
      soma+=val;
      if(val<min) min=val;
    }
    if(c==4){
       media=(soma-min)/3;
    }else if(c==2 || c==3){
      media=(soma)/c;
    }else{
      media=soma/2;
    }
    printf("%.1lf\n",media);
}
    return 0;
}