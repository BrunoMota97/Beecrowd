#include <stdio.h>
 
int main() {
 
char nomes[31];
for(int i=0;i<10;i++){
    scanf("%s\n",nomes);
    if(i==2 || i==6 || i==8) printf("%s\n",nomes);
}
    return 0;
}