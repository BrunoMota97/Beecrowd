#include <stdio.h>
#include<string.h>
int main() {
  int n,w;
    char buff[150];
    scanf("%d %d\n",&n,&w);
    while(n--){
    fgets(buff, sizeof(buff), stdin);
    int espacos=0;
    for(int i=0;buff[i]!='\0';i++){
      if(buff[i]==' ') espacos++;
    }
    int soma=0;
    for(int i=strlen(buff)-1,c=1;buff[i]!=' ';i--){
      if(buff[i]>='0' && buff[i]<='9'){
        soma+=(buff[i]-'0')*c;  
        c=c*10;
      }
    }
    if(soma>w){
      for(int i=0,d=0;d!=espacos;i++){
        if(buff[i]==' ') d++;
        if(d==espacos) break;
        printf("%c",buff[i]);
    }
      printf("\n");
    }
  }
    return 0;
}