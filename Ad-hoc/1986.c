#include <stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int heaxadecimal_decimal(char *v){
  long long int soma=0,l;
  for(int i=0,c=strlen(v)-1;i<strlen(v);i++,c--){
    if(isalpha(v[i])){
      if(v[i]=='A' || v[i]=='a') l=10;
      else if(v[i]=='B' || v[i]=='b') l=11;
      else if(v[i]=='C' || v[i]=='c') l=12;
      else if(v[i]=='D' || v[i]=='d') l=13;
      else if(v[i]=='E' || v[i]=='e') l=14;
      else l=15;
      soma+=l*pow(16,c);
    }else{
     soma+=(v[i]-'0')*pow(16,c);
    }
  }
   return soma;
}


int main() {
int n;
 char *v = (char*) malloc(100*sizeof(char));
scanf("%d\n",&n);
while(n--){
scanf("%s",v);
  printf("%c",heaxadecimal_decimal(v));
}
printf("\n");
    return 0;
}