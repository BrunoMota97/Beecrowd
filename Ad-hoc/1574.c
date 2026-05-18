#include <stdio.h>
#include<string.h> 
int main() {
 
int t,n,comando,comandos[101];
char palavra[20];
scanf("%d\n",&t);
while(t--){
    scanf("%d\n",&n);
    int p=0;
    for(int i=1;i<=n;i++){
        scanf("%s",palavra);
        if(strcmp(palavra,"LEFT")==0) comandos[i]=-1;
        else if(strcmp(palavra,"RIGHT")==0) comandos[i]=1;
        else{
            scanf("%s %d\n",palavra,&comando);
            comandos[i]=comandos[comando];
        }
        p+=comandos[i];
    }
    printf("%d\n",p);
}
 
    return 0;
}