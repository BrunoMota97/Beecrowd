#include <stdio.h>
int main() {

int n, primeiro, c, cmax=0, seguinte;
scanf("%d\n%d",&n,&primeiro);
n--; c = 1;
   while (n > 0){
   scanf("%d",&seguinte); n--;
   if (seguinte == primeiro) c++;
   else {
   if (c > cmax) cmax = c;
   c = 1;
   primeiro = seguinte;
  }
  }
if (c > cmax) cmax = c;
printf("%d\n",cmax);
return 0;
}
