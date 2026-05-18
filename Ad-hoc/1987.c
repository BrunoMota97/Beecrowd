#include <stdio.h>
 
int main() {
 
unsigned n,m,q,flag=0;
while(scanf("%u %u\n",&n,&m)!=EOF){
    unsigned soma=0;
    if(m%3==0) flag=1;
    while(m){
    q=m%10,m/=10; soma+=q;
    }
     if(flag) printf("%u sim\n",soma);
     else printf("%u nao\n",soma);
     flag=0;
}
    return 0;
}