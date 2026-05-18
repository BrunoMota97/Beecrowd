#include <stdio.h>
 
int main() {
int qt,n,m;
char comando1[6],comando2[6],nome1[100],nome2[100];
scanf("%d\n",&qt);

while(qt--){
    scanf("%s %s %s %s\n",nome1,comando1,nome2,comando2);
    scanf("%d %d\n",&n,&m);
    if((n+m)%2==0){ 
        if(strcmp(comando1,"PAR")==0) printf("%s\n",nome1);
        else printf("%s\n",nome2);
    }else{
        if(strcmp(comando1,"IMPAR")==0) printf("%s\n",nome1);
        else printf("%s\n",nome2); 
    }
}
    return 0;
}