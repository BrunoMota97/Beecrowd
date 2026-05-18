#include <stdio.h>
#include<string.h> 
int main() {
 
int c;
char palavra[10001];
scanf("%d\n",&c);
while(c--){
    scanf("%s\n",palavra);
    printf("%.2lf\n",strlen(palavra)*(1.0/100));
}
    return 0;
}