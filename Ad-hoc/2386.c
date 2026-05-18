#include <stdio.h>
 
int main() {
 
int a,n,f,c=0;
scanf("%d\n%d\n",&a,&n);
while(n--){
  scanf("%d\n",&f);
  if(a*f>=40000000) c++;
}
printf("%d\n",c);

    return 0;
}