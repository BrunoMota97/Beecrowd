#include <stdio.h>
int main() {
int a[5],b[5],c=0;
scanf("%d %d %d %d %d\n",&a[0],&a[1],&a[2],&a[3],&a[4]);
scanf("%d %d %d %d %d\n",&b[0],&b[1],&b[2],&b[3],&b[4]);
for(int i=0;i<5;i++){
    if(a[i]==b[i]){
      c++;break;
      };
}
printf("%c\n",c>0? 'N':'Y');
    return 0;
}