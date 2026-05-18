#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int maiorcadeiacomum(char* palavra1, char* palavra2){
    int** T;
    int c;
   T = (int**) malloc(sizeof(int*) * (strlen(palavra1) + 1));
    for(int i = 0; i <= strlen(palavra1); i++){
        T[i] = (int*) malloc(sizeof(int) * (strlen(palavra2)+ 1));
        for(int j = 0; j <= strlen(palavra2); j++){
            T[i][j] = 0;
        }
    }
    c=0;
    for(int i = 1; i <= strlen(palavra1); i++){
        for(int j = 1; j <= strlen(palavra2); j++){
            if(palavra1[i - 1] == palavra2[j - 1]){
                T[i][j] = T[i - 1][j - 1] + 1;
                if(T[i][j]>c) c=T[i][j];
            }
        }
    }
    return c;
}
int main() {
char palavra1[51],palavra2[51];
while(scanf("%[^\n]\n%[^\n]\n",palavra1,palavra2)!=EOF){
    printf("%d\n",maiorcadeiacomum(palavra1,palavra2));
}
    return 0;
}