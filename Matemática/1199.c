#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
void decimal_hexadecimal(char *v){
  int ar[300],i=0,q;
  int l=atoi(v);
  while(l>0){
    q=l%16,l/=16,ar[i]=q,i++;
}
printf("0x");
for(int k=i-1;k>=0;k--){
      if(ar[k]==10) printf("A");
      else if(ar[k]==11) printf("B");
      else if(ar[k]==12) printf("C");
      else if(ar[k]==13) printf("D");
      else if(ar[k]==14) printf("E");
      else if(ar[k]==15) printf("F");
      else printf("%d",ar[k]);
    }
    printf("\n");
}

void heaxadecimal_decimal(char *v){
  int soma=0,q,l;
  for(int i=2,c=strlen(v)-3;i<strlen(v);i++,c--){
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
     printf("%d\n",soma);
}

int main() {
char v[300],comando[4];
int n;
while(scanf("%s\n",v)!=EOF){
  if(v[0]=='-') break;
if(v[1]=='x')  heaxadecimal_decimal(v);
 else decimal_hexadecimal(v);
}
    return 0;
}