#include <stdio.h>
int main() {
int t,a=0,g=0,d=0;
scanf("%d\n",&t);
while(t!=4){
    switch(t){
        case 1: a++;
        break;
        case 2: g++;
        break;
        case 3: d++;
        break;
    }
scanf("%d\n",&t);
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    return 0;
}