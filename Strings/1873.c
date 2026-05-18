#include <stdio.h>
#include<string.h>
int main() {
 
 int c;
 char resp1[10],resp2[10];
 scanf("%d\n",&c);
for(int i=1;i<=c;i++){
     scanf("%s %s\n",resp1,resp2);
     if((strcmp(resp1,"tesoura")==0 && strcmp(resp2,"papel")==0) || 
         (strcmp(resp1,"pedra")==0 && strcmp(resp2,"lagarto")==0) ||
        (strcmp(resp1,"lagarto")==0 && strcmp(resp2,"spock")==0) ||
        (strcmp(resp1,"spock")==0 && strcmp(resp2,"tesoura")==0) ||
          (strcmp(resp1,"tesoura")==0 && strcmp(resp2,"lagarto")==0) ||
          (strcmp(resp1,"lagarto")==0 && strcmp(resp2,"papel")==0) ||
          (strcmp(resp1,"spock")==0 && strcmp(resp2,"pedra")==0) ||
          (strcmp(resp1,"pedra")==0 && strcmp(resp2,"tesoura")==0) ||
          (strcmp(resp1,"papel")==0 && strcmp(resp2,"pedra")==0)  ||
          (strcmp(resp1,"papel")==0 && strcmp(resp2,"spock")==0) 
        ) printf("rajesh\n");
    else if((strcmp(resp2,"tesoura")==0 && strcmp(resp1,"papel")==0) || 
         (strcmp(resp2,"pedra")==0 && strcmp(resp1,"lagarto")==0) ||
        (strcmp(resp2,"lagarto")==0 && strcmp(resp1,"spock")==0) ||
        (strcmp(resp2,"spock")==0 && strcmp(resp1,"tesoura")==0) ||
          (strcmp(resp2,"tesoura")==0 && strcmp(resp1,"lagarto")==0) ||
          (strcmp(resp2,"lagarto")==0 && strcmp(resp1,"papel")==0) ||
          (strcmp(resp2,"spock")==0 && strcmp(resp1,"pedra")==0) ||
          (strcmp(resp2,"pedra")==0 && strcmp(resp1,"tesoura")==0) ||
          (strcmp(resp2,"papel")==0 && strcmp(resp1,"pedra")==0)  ||
          (strcmp(resp2,"papel")==0 && strcmp(resp1,"spock")==0)
          ) printf("sheldon\n");
    else printf("empate\n");
 }
    return 0;
}