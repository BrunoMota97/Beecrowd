#include <stdio.h>
 
int main() {
 char nome[40];
 double d,soma=0,c=0;
while(scanf("%[^\n]%lf\n",nome,&d)!=EOF){
    soma+=d;
    c++;
}
printf("%.1lf\n",soma/c);
    return 0;
}