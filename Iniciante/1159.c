#include <stdio.h>
int main() {
int x;
scanf("%d\n",&x);
while(x!=0){
  int soma=0;
    for(int i=x,c=0;c<5;i++){
        if(i%2==0){
            soma+=i;
            c++;
        }
    }
    printf("%d\n",soma);
    scanf("%d\n",&x);
}
    return 0;
}