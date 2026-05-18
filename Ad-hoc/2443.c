#include <stdio.h>


int mdc (int n1, int n2){    
    if (n2 == 0){
    return n1;
} else {   
  int resto = n1 % n2;
   return mdc(n2, resto);
}
}
 
int main() {
 
int a,b,c,d;
scanf("%d %d %d %d\n",&a,&b,&c,&d);
int num=(a*d)+(b*c);
int dem=(b*d);
int r = mdc(num,dem);
printf("%d %d\n",num/r,dem/r);
    return 0;
}