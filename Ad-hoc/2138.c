#include<stdio.h>
int main(){
    char numero[1002];
    while(scanf("%s\n",numero)!=EOF){
        int num[10] = {0};
        for(int i =0;numero[i]!='\0'; i++){
            num[numero[i]-'0']++;
        }
        int max = num[0];
        int posicao = 0;
        for(int i = 1; i < 10 ; i++){
            if(num[i] >= max){
                max = num[i];
                posicao = i;
            }
        }
       printf("%d\n",posicao);
    }
    return 0;
}