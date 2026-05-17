#include <stdio.h>
int main() {
int x,y;
float p;
scanf("%d %d\n",&x,&y);
switch(x){
    case 1: p=4.00;
    break;
    case 2: p=4.50;
    break;
    case 3: p=5.00;
    break;
    case 4: p=2.00;
    break;
    case 5: p=1.50;
    break;
}
printf("Total: R$ %.2lf\n",p*y);
    return 0;
}