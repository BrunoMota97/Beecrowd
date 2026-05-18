#include <stdio.h>
int main() {
int x,y;
    scanf("%d %d\n",&x,&y);
while(x!=0 || y!=0){
     if(x>0 && y>0) printf("primeiro\n");
      else if(x>0 && y<0) printf("quarto\n");
      else if(x<0 && y>0) printf("segundo\n");
      else if(x<0 && y<0) printf("terceiro\n");
      else break;
    scanf("%d %d\n",&x,&y);
}
    return 0;
}