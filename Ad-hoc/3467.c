#include <stdio.h>
 
int main() {
 char caso[3];
 while(scanf("%s\n",caso)!=EOF){
if(caso[2]=='L') printf("Esse eh o meu lugar\n");
 else printf("Oi, Leonard\n");
}
    return 0;
}