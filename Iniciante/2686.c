#include <stdio.h>
int main(){
  float m;
  int horas,minutos,segundos;
  while(scanf("%f\n",&m)!=EOF){
  if(m>=0.0 && m<90.0 || m==360.0) printf("Bom Dia!!\n");
  else if(m<180.0) printf("Boa Tarde!!\n");
  else if(m<270.0) printf("Boa Noite!!\n");
  else printf("De Madrugada!!\n");
   horas = 6 + ((int)(m * 240) / (3600)) % 60;
    minutos = ((int)(m * 240) / 60) % 60;
    segundos = (int)(m * 240) % 60;     
  printf("%02d:%02d:%02d\n",horas%24,minutos,segundos);
  }
}