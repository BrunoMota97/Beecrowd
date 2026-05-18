#include <stdio.h>
#include<ctype.h>
 
int main() {
 
int n,res,v1,v2;
char letra;
scanf("%d\n",&n);
while(n--){
    scanf("%d%c%d\n",&v1,&letra,&v2);
    if(v1==v2){
         res=v1*v2;
    }else{
        if(isupper(letra)) res=v2-v1;
        else res=v1+v2;
    }
    printf("%d\n",res);
}
 
    return 0;
}