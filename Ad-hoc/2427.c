#include <stdio.h>
 
int main() {
 
int l;
scanf("%d\n",&l);
int pedacos=1;
while(l>=2){
   l/=2;
   pedacos*=4; 
}
printf("%d\n",pedacos);
    return 0;
}