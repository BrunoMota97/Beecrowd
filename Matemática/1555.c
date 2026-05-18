#include <stdio.h>

int main() {
 
int n,x,y;
scanf("%d\n",&n);
while(n--){
    scanf("%d %d\n",&x,&y);
    int r = 9*x*x + y*y;
    int b =2*x*x +25*y*y;
    int c=-100*x + y*y*y;
    if(r>b && r>c) printf("Rafael ganhou\n");
    else if(b>c && b>r) printf("Beto ganhou\n");
    else printf("Carlos ganhou\n");
    
}
 
    return 0;
}