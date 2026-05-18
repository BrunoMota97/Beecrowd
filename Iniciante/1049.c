#include <stdio.h>
#include<string.h>
int main() {
 
char id1[15],id2[15],id3[15];
scanf("%s\n%s\n%s\n",id1,id2,id3);

if(strcmp(id1,"vertebrado")==0){
    if(strcmp(id2,"ave")==0){
        if(strcmp(id3,"carnivoro")==0) printf("aguia\n");
        else printf("pomba\n");
    }else{
      if(strcmp(id2,"mamifero")==0){
        if(strcmp(id3,"onivoro")==0) printf("homem\n");
        else printf("vaca\n");  
    }
}}else{
     if(strcmp(id2,"inseto")==0){
        if(strcmp(id3,"hematofago")==0) printf("pulga\n");
        else printf("lagarta\n");
    }else{
      if(strcmp(id2,"anelideo")==0){
        if(strcmp(id3,"hematofago")==0) printf("sanguessuga\n");
        else printf("minhoca\n");  
    }
}}
    return 0;
}