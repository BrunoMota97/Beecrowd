#include <stdio.h>
 
int main() {
 
int n,pa,pb,soma1,soma2,ano;
float g1,g2;
scanf("%d\n",&n);
while(n--){
  scanf("%d %d %f %f\n",&pa,&pb,&g1,&g2);
  soma1=pa,soma2=pb,ano=0;
  while(pa<=pb && ano<=100){
    pa=pa+(pa*(g1/100.0));
    pb=pb+(pb*(g2/100.0));
    ano++;
  }
  if(ano>100) printf("Mais de 1 seculo.\n");
  else printf("%d anos.\n",ano);
}
    return 0;
}