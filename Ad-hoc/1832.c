#include <stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int octal_decimal(char *v){
  long long int soma=0,q,l;
  for(int i=0,c=strlen(v)-1;i<strlen(v);i++,c--){
     soma+=(v[i]-'0')*pow(8,c);
    }
    return soma;
     
}
int main(){
    char codigo[1000];
    char *nov[1000];
    while(scanf("%[^\n]\n",codigo)!=EOF){
      int c=0;
       char* token = strtok(codigo, " ");
    while (token != NULL) {
        nov[c++]=token;
        token = strtok(NULL, " ");
    }
    for(int i=0;i<c;i++){
      int res= octal_decimal(nov[i]);
      if(res==64) printf(" ");
      if(res>=129 && res<=137) printf("%c",res-32);
      if(res>=145 && res<=153) printf("%c",res-39);
      if(res>=162 && res<=169) printf("%c",res-47);
      if(res>=193 && res<=201) printf("%c",res-128);
      if(res>=209 && res<=217) printf("%c",res-135);
      if(res>=226 && res<=233) printf("%c",res-143);
      if(res>=240 && res<=249) printf("%c",res-192);
    }
    printf("\n");
    
    }
}