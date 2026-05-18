#include <stdio.h>
#include<string.h>
int main() {
 
int n;
char codigo[1000];
while(scanf("%d\n",&n)!=EOF){
for(int i=0;i<n;i++){
    scanf("%[^\n]\n",codigo);
    if(strcmp(codigo,".")==0) printf("a\n");
    else if(strcmp(codigo,"..")==0) printf("b\n");
    else if(strcmp(codigo,"...")==0) printf("c\n");
    else if(strcmp(codigo,". .")==0) printf("d\n");
    else if(strcmp(codigo,".. ..")==0) printf("e\n");
    else if(strcmp(codigo,"... ...")==0) printf("f\n");
    else if(strcmp(codigo,". . .")==0) printf("g\n");
    else if(strcmp(codigo,".. .. ..")==0) printf("h\n");
    else if(strcmp(codigo,"... ... ...")==0) printf("i\n");
    else if(strcmp(codigo,". . . .")==0) printf("j\n");
    else if(strcmp(codigo,".. .. .. ..")==0) printf("k\n");
    else if(strcmp(codigo,"... ... ... ...")==0) printf("l\n");
    else if(strcmp(codigo,". . . . .")==0) printf("m\n");
    else if(strcmp(codigo,".. .. .. .. ..")==0) printf("n\n");
    else if(strcmp(codigo,"... ... ... ... ...")==0) printf("o\n");
    else if(strcmp(codigo,". . . . . .")==0) printf("p\n");
    else if(strcmp(codigo,".. .. .. .. .. ..")==0) printf("q\n");
    else if(strcmp(codigo,"... ... ... ... ... ...")==0) printf("r\n");
    else if(strcmp(codigo,". . . . . . .")==0) printf("s\n");
    else if(strcmp(codigo,".. .. .. .. .. .. ..")==0) printf("t\n");
    else if(strcmp(codigo,"... ... ... ... ... ... ...")==0) printf("u\n");
    else if(strcmp(codigo,". . . . . . . .")==0) printf("v\n");
    else if(strcmp(codigo,".. .. .. .. .. .. .. ..")==0) printf("w\n");
    else if(strcmp(codigo,"... ... ... ... ... ... ... ...")==0) printf("x\n");
    else if(strcmp(codigo,". . . . . . . . .")==0) printf("y\n");
    else  printf("z\n");
}
}
    return 0;
}