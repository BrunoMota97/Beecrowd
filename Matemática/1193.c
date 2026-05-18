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
for(int k=i-1;k>=0;k--){
      if(ar[k]==10) printf("a");
      else if(ar[k]==11) printf("b");
      else if(ar[k]==12) printf("c");
      else if(ar[k]==13) printf("d");
      else if(ar[k]==14) printf("e");
      else if(ar[k]==15) printf("f");
      else printf("%d",ar[k]);
    }
    printf(" hex\n");
}


void decimal_binario(char *v){
  long long int ar[300],i=0,q;
  int l=atoi(v);
  while(l>0){
    q=l%2,l/=2,ar[i]=q,i++;
}
for(int k=i-1;k>=0;k--){
  printf("%lld",ar[k]);
    }
    printf(" bin\n");
}

void binario_decimal(char *v){
  long long int soma=0,q;
  for(int i=strlen(v)-1,c=0;i>=0;i--,c++){
    if((v[i]-'0')==1) soma+=pow(2,c);
  }
     printf("%lld dec\n",soma);
}

void heaxadecimal_decimal(char *v){
  long long int soma=0,q,l;
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
     printf("%lld dec\n",soma);
}


void heaxadecimal_binario(char *v){
  char bin[300]="";
  for(int i=0;v[i]!='\0';i++){
      if(v[i]=='A' || v[i]=='a') strcat(bin, "1010");
      else if(v[i]=='B' || v[i]=='b') strcat(bin, "1011");
      else if(v[i]=='C' || v[i]=='c') strcat(bin, "1100");
      else if(v[i]=='D' || v[i]=='d') strcat(bin, "1101");
      else if(v[i]=='E' || v[i]=='e') strcat(bin, "1110");
      else if(v[i]=='F' || v[i]=='f') strcat(bin, "1111");
      else if(v[i]=='0') strcat(bin, "0000");
      else if(v[i]=='1') strcat(bin, "0001");
      else if(v[i]=='2') strcat(bin, "0010");
      else if(v[i]=='3') strcat(bin, "0011");
      else if(v[i]=='4') strcat(bin, "0100");
      else if(v[i]=='5') strcat(bin, "0101");
      else if(v[i]=='6') strcat(bin, "0110");
      else if(v[i]=='7') strcat(bin, "0111");
      else if(v[i]=='8') strcat(bin, "1000");
      else strcat(bin, "1001");
    }
     int l=0;
     while(bin[l]!='1') l++;
     for(int k=l;bin[k]!='\0';k++) printf("%c",bin[k]);
     printf(" bin\n");
}

void binario_hexadecimal(char *binary) {  
     unsigned long decimal = strtoul(binary, NULL, 2);

    printf("%lx hex\n",decimal);
}
int main() {
char v[300],comando[4];
int n,k=0;
scanf("%d\n",&n);
while(n--){
scanf("%s %s\n",v,comando);
printf("Case %d:\n",++k);
if(strcmp(comando,"bin")==0){
  binario_decimal(v);
  binario_hexadecimal(v);
}else if(strcmp(comando,"dec")==0){
  decimal_hexadecimal(v);
  decimal_binario(v);
}else{
  heaxadecimal_decimal(v);
  heaxadecimal_binario(v);
}
printf("\n");
}
    return 0;
}