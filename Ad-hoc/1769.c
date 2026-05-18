#include <stdio.h>
int main() {
 
char s[15];
int b1,b2,i;

while(scanf("%s",s)!=EOF){
    b1=0,b2=0;
    for(int i=0,j=0,k=9;s[i]!='-';i++){
       if(s[i]=='.'){
         continue;
       }else{
        b1+=(s[i]-'0')*(j+1);
        b2+=(s[i]-'0')*(k-j);
        j++;
       }
       }
    b1 %=11; b2 %=11;
    b1 = (b1==10? 0:b1);
    b2 = (b2==10? 0:b2);
    if(b1==s[12]-'0' && b2==s[13]-'0'){ printf("CPF valido\n");
    }else{
    printf("CPF invalido\n");
    }
}
    return 0;
}