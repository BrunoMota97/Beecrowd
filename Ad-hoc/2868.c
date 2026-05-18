#include <stdio.h>
#include<math.h>
#include<string.h>
int main() {
int n,v1,v2,res,r,c;
char op;
scanf("%d\n",&n);
while(n--){
scanf("%d %c %d = %d\n",&v1,&op,&v2,&r);
    if(op=='+') res=v1+v2;
    if(op=='-') res=v1-v2;
    if(op=='x') res=v1*v2;
    c=abs(r-res);
    printf("E");
    for(int i=0;i<c;i++)printf("r");
    printf("ou!\n");
    
}
    return 0;
}