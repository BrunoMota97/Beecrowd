#include <stdio.h>
 
int main() {
 
int n,l,i,j,conta;
while(scanf("%d %d\n",&n,&l)!=EOF){
conta=0;
while(n--){
    scanf("%d %d\n",&i,&j);
    if(i==l &&j==0) conta++;
}
printf("%d\n",conta);
}
    return 0;
}