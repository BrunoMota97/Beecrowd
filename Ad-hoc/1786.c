#include <stdio.h>
 
int main() {
 
char s[9];
int b1,b2,i;
while(scanf("%s\n",s)!=EOF){
    b1=0,b2=0;
    for(int i=0,k=9;i<9;i++){
       if(i==3 || i==6) printf(".");
        printf("%c",s[i]);
        b1+=(s[i]-'0')*(i+1);
        b2+=(s[i]-'0')*(k-i);
    }
    if(b1%11==10) b1=0;
    if(b2%11==10) b2=0;
    printf("-%d%d\n",b1%11,b2%11);
}
    return 0;
}