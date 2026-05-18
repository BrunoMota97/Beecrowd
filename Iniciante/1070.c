#include <stdio.h>
int main() {
int x;
scanf("%d\n",&x);
for(int i=0;i<6;){ 
    if(x%2!=0){
        printf("%d\n",x);
        i++;
    }
    x++;
}
return 0;
}