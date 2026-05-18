#include <stdio.h>
 
int main() {
 
int c,g;
scanf("%d %d\n",&c,&g);
int m=c/g,dia;
char mes[2][15]={"setembro","outubro"};
printf("A UFSC fecha dia ");
if(m<10){
     dia=21+m;
   printf("%d de %s.\n",dia,mes[0]);
}else{
    dia=m-9;
  printf("%d de %s.\n",dia,mes[1]);
}
    return 0;
}