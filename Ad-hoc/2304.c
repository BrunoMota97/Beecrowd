#include <stdio.h>
#include<string.h> 
int main() {
 
int d,n;
scanf("%d %d\n",&d,&n);
int e,f;
e=d,f=d;
while(n--){
  int valor;
  char instrucao[40];
  char *nov[4];
  int c=0;
    scanf("%[^\n]\n",instrucao);
    char* token = strtok(instrucao, " ");
    while (token != NULL) {
        nov[c++]=token;
        token = strtok(NULL, " ");
    }
      if(!strcmp(nov[0],"C")){
        valor=atoi(nov[2]);
        if(!strcmp(nov[1],"D")) d-=valor;
        if(!strcmp(nov[1],"E")) e-=valor;
        if(!strcmp(nov[1],"F")) f-=valor;
      }
      if(!strcmp(nov[0],"V")){
        valor=atoi(nov[2]);
        if(!strcmp(nov[1],"D")) d+=valor;
        if(!strcmp(nov[1],"E")) e+=valor;
        if(!strcmp(nov[1],"F")) f+=valor;
      }
       if(!strcmp(nov[0],"A")){
        valor=atoi(nov[3]);
        if(!strcmp(nov[1],"D")) d+=valor;
        if(!strcmp(nov[1],"E")) e+=valor;
        if(!strcmp(nov[1],"F")) f+=valor;
        if(!strcmp(nov[2],"D")) d-=valor;
        if(!strcmp(nov[2],"E")) e-=valor;
        if(!strcmp(nov[2],"F")) f-=valor;
       }
    }
printf("%d %d %d\n",d,e,f);
    return 0;
}