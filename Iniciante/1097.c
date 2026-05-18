#include <stdio.h>
int main() {
for(int i=1,c=7;i<=9;i+=2,c+=2){
    for(int j=c,a=0;a<3;j--,a++) printf("I=%d J=%d\n",i,j);
}
    return 0;
}