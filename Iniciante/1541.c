#include <stdio.h>
#include<math.h>
int main() {
 
int a,b,c;
scanf("%d %d %d\n",&a,&b,&c);
while(1){
int area=a*b,areamaxima=sqrt((area*100)/c);
printf("%d\n",areamaxima);
  scanf("%d %d %d\n",&a,&b,&c);
if(a==0) break;
}
    return 0;
}