#include <stdio.h>

int main() {
 
int n,l;
scanf("%d\n",&n);
char palavra[51];
while(n--){
    scanf("%d\n",&l);
    int soma=0;
    for(int i=0;i<l;i++){
        scanf("%s\n",palavra);
        for(int j=0;palavra[j]!='\0';j++){
            soma+=((palavra[j]-65)+i+j);
        }
    }
    printf("%d\n",soma);
}
    return 0;
}