#include <stdio.h>
int main() {
int n;
scanf("%d\n",&n);
int c=n,k;
for(int i=1;i<c-1;i++){
   n=n*(c-i);
}
printf("%d\n",n);
}