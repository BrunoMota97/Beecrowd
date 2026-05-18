#include <stdio.h>
 
int main() {
 
int n;
scanf("%d\n",&n);
int n1,n2;
scanf("%d\n",&n1);
int c=1;
for(int i=0;i<n;i++){
    scanf("%d\n",&n2);
    if(n2-n1){
       c++; n1=n2;
    }
}
 printf("%d\n",c);
    return 0;
}