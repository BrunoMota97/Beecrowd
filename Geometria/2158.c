#include <stdio.h>
 
int main() {
 
long long int fp,fh,k=0;
while(scanf("%lld %lld\n",&fp,&fh)!=EOF){
    long long int ligacoes=(fp*5+fh*6)/2;
    long long int atomos=ligacoes+2-(fp+fh);
    printf("Molecula #%lld.:.\nPossui %lld atomos e %lld ligacoes\n\n",++k,atomos,ligacoes);
}
 
    return 0;
}