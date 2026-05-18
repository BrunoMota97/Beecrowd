#include <stdio.h>
#include<string.h>
int main() {
 
 int t;
 char resp1[10],resp2[10];
 scanf("%d\n",&t);
for(int i=1;i<=t;i++){
     scanf("%s %s\n",resp1,resp2);
     printf("Caso #%d: ",i);
     if((strcmp(resp1,"tesoura")==0 && strcmp(resp2,"papel")==0) || 
         (strcmp(resp1,"pedra")==0 && strcmp(resp2,"lagarto")==0) ||
        (strcmp(resp1,"lagarto")==0 && strcmp(resp2,"Spock")==0) ||
        (strcmp(resp1,"Spock")==0 && strcmp(resp2,"tesoura")==0) ||
          (strcmp(resp1,"tesoura")==0 && strcmp(resp2,"lagarto")==0) ||
          (strcmp(resp1,"lagarto")==0 && strcmp(resp2,"papel")==0) ||
          (strcmp(resp1,"Spock")==0 && strcmp(resp2,"pedra")==0) ||
          (strcmp(resp1,"pedra")==0 && strcmp(resp2,"tesoura")==0) ||
          (strcmp(resp1,"papel")==0 && strcmp(resp2,"pedra")==0)  ||
          (strcmp(resp1,"papel")==0 && strcmp(resp2,"Spock")==0) 
        ) printf("Bazinga!\n") ;
    else if((strcmp(resp2,"tesoura")==0 && strcmp(resp1,"papel")==0) || 
         (strcmp(resp2,"pedra")==0 && strcmp(resp1,"lagarto")==0) ||
        (strcmp(resp2,"lagarto")==0 && strcmp(resp1,"Spock")==0) ||
        (strcmp(resp2,"Spock")==0 && strcmp(resp1,"tesoura")==0) ||
          (strcmp(resp2,"tesoura")==0 && strcmp(resp1,"lagarto")==0) ||
          (strcmp(resp2,"lagarto")==0 && strcmp(resp1,"papel")==0) ||
          (strcmp(resp2,"Spock")==0 && strcmp(resp1,"pedra")==0) ||
          (strcmp(resp2,"pedra")==0 && strcmp(resp1,"tesoura")==0) ||
          (strcmp(resp2,"papel")==0 && strcmp(resp1,"pedra")==0)  ||
          (strcmp(resp2,"papel")==0 && strcmp(resp1,"Spock")==0) ) printf("Raj trapaceou!\n");
    else printf("De novo!\n");
 }
    return 0;
}