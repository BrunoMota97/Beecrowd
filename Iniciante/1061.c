#include <stdio.h>
 
int main() {
 
int dia1,dia2,h1,h2,m1,m2,s1,s2,dia,hora,min,s;
scanf("Dia %d\n%d : %d : %d\n",&dia1,&h1,&m1,&s1);
scanf("Dia %d\n%d : %d : %d\n",&dia2,&h2,&m2,&s2);
dia=dia2-dia1;hora=h2-h1; min=m2-m1; s=s2-s1;
if(s<0) s+=60,min--;
if(min<0) min+=60,hora--;
if(hora<0) hora+=24,dia--;
printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dia,hora,min,s);
    return 0;
}