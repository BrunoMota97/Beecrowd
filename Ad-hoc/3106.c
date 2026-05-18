#include <stdio.h>
int main() {
 
int n;
scanf("%d\n",&n);
int s,soma=0;
for(int i=0;i<n;i++){
    scanf("%d",&s);
    int q=s/3;
    soma+=q;
}
 printf("%d\n",soma*3);
    return 0;
}